//SAMUEL BATISTA DE MOURA 01/04/2026
//obs:durante o codigo resovi colocar funcoes pq sim,provavelmente tornei complexo sem necessidade e devo ter cmetido erros,revisei bastante antes de enviar 

#include <stdio.h>
#include <stdlib.h>


void limpar_buffer(void);

int calculo_media(void);

int calculo_distancia(int media,int litros);

int calculo_litros(int media, int distancia);

int main(){
	
	int med,opcao,lit,dist,validacao;

	med=calculo_media();
	
	do{
		printf("deseja saber:\n1. quantos km fara com n litros \n2. quantos litros precisara para percorrer uma distancia\n");
		scanf("%d",&opcao);
		
		if(opcao!=1 && opcao!=2){
			
			printf("opcao invalida,tente novamente\n");
		}
	}while(opcao!=1 && opcao!=2);
	
	switch(opcao){
		
		case 1:
			do{
				
			printf("quantos litros?\n");
			validacao=scanf("%d",&lit);
			
			if(validacao!=1){   
				
				limpar_buffer();
				
				}
				}while(validacao!=1);
			
			printf("a distancia percorrida sera: %d ",calculo_distancia(med,lit));
		break;
		
		case 2:
			do{
				printf("qual a distancia a percorrer?\n");
			validacao=scanf("%d",&dist);
				
				if(validacao!=1){   
				
				limpar_buffer();
				
				}
				}while(validacao!=1);
			
			printf("serao gastos: %d litros\n ",calculo_litros(med,dist));
		break;
			
	}
	printf("programa finalizado");
	return 0;
	
}


void limpar_buffer(void){
		int c;//para limpar buffer
		while((c=getchar())!='\n' && c!=EOF);//limpa buffer,o getchar joga o buffer dentro da variavel c até encontrar um enter
}

int calculo_media(void){
		int litros,distancia,validacao,media;
	int c;//para limpar buffer
	
	printf("bem vindo ao programa de calculo de consumo de combustivel \n");
	
	do{
	
	printf("digite a distancia percorrida pelo carro:");
	validacao=scanf("%d",&distancia);
	
	if(validacao!=1 || distancia<0){   
		limpar_buffer();
		}
	
	}while(validacao!=1 || distancia<0);
	
	do{
	
		printf("digite quantos litros foram gastos:\n");
		validacao=scanf("%d",&litros); //o scanf gera o numer de variaveis lidas quando consegue ler todas,se for menor que isso,nao leu
			
			if(validacao!=1 || litros<0){   
		printf("nao foi possivel ler o numero,digite novamente\n");
		while((c=getchar())!='\n' && c!=EOF); 
		}
		
	}while(validacao!=1 || litros<=0);
	
	media=distancia/litros; //calculo da media
	
	printf("seu consumo medio é de %d km\\l \n", media);
	
	return media;
}

int calculo_distancia(int media,int litros){
	return media*litros;
	
}

int calculo_litros(int media, int distancia){
	return distancia/media;
}
