#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {   
	char titulo[20][101]={"crime e castigo","noites brancas","a morte de ivan ilitch","metarmofose","o estrangeiro"}; 
	char autor[20][81]={"dostoievski","dostoievski","Liev tolstoi","frans kafka","camus"};
	int ano[20]= {1866,1880,1869,1915, 1942 };
	int quantidade[20]={0,1,0,4,0};
	int disponivel[20]={0,1,0,1,0};
	int totalLivros=15;
	int proximoCad=5;
		char nomeBuscar[101];
	int c;//VARIAVEL PARA LIMPAR BUFFER
	int opcoes;//variavel para controlar fluxo das acoes
	
	
	//===============================VARIAVEIS=============================================
	
	printf("bem vindo a biblioteca!\n");
	
	do{   //controlar fluxo de opções
	
	printf("=================================================================================================\n");
	printf("escolha a ação a ser executada:\n");
	printf("1.cadastrar livro      2 .listar livros     3.buscar por nome  4.listar disponiveis   0.sair \n");
	scanf("%d",&opcoes);
	while ((c = getchar()) != '\n' && c != EOF);//limpeza de buffer
	
	
	switch(opcoes){
		case 1://
			
			printf("digite o nome do livro:\n");
			fgets(titulo[proximoCad],101,stdin);
			titulo[proximoCad][strcspn(titulo[proximoCad],"\n")]=0;  
			
			printf("digite o autor do livro:\n");
			fgets(autor[proximoCad],101,stdin);
		
			
			printf("digite o ano do livro:\n");
			scanf("%d", &ano[proximoCad]);
			while ((c = getchar()) != '\n' && c != EOF);
			
			printf("digite a quantidade  de livros:\n");
			scanf("%d",&quantidade[proximoCad]);
			while ((c = getchar()) != '\n' && c != EOF);
			
			if(quantidade[proximoCad]>0){
				disponivel[proximoCad]=1;
			}else{
				disponivel[proximoCad]=0;
			}
			
			totalLivros=totalLivros+quantidade[proximoCad];
			proximoCad++;
			
			break;
			
			case 2:
				for(int i=0;i<proximoCad;i++){
					printf("livro 1:\ntitulo: %s\nautor: %s\nano de publicacao: %d\n %s\n=========================================\n ",
					titulo[i],autor[i],ano[i],disponivel[i]==1 ? "disponivel":"indisponivel");//disponivel[i]==1 ? "disponivel":"indisponivel" usei esse if igual a outras linguagens para facilitar
				}
			break;
			
			case 3:
			
				printf("digite o nome:\n");
				fgets(nomeBuscar,101,stdin);
				nomeBuscar[strcspn(nomeBuscar,"\n")]=0;
				
				printf("................buscando...............\n");
				                                                  
			for(int i=0;i<20;i++){
					if(strcmp(nomeBuscar,titulo[i])==0){
						printf("livro 1:\ntitulo: %s\nautor: %s\nano de publicacao: %d\n %s\n=========================================\n ",
					titulo[i],autor[i],ano[i],disponivel[i]==1 ? "disponivel":"indisponivel");
					}
				}
				printf(".............busca finalizada...........\n");
				
				break;
				  
			case 4:
				printf("DISPONIVEL:\n");
			for(int i=0;i<20;i++){
				
				if(disponivel[i]==1){
					
					printf("livro 1:\ntitulo: %s\nautor: %s\nano de publicacao: %d\n %s\n=========================================\n ",
					titulo[i],autor[i],ano[i],disponivel[i]==1 ? "disponivel":"indisponivel");
				}
			}
			
			break;
			case 0:
				printf("\nprograma finalizado\n");
			
			break;
			
			default:
				printf("digite uma opcao valida\n");
				
			break;
			}
			
	
	
	}while(opcoes!=0);	
	

	return 0;
}