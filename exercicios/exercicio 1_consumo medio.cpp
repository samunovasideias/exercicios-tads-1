//SAMUEL BATISTA DE MOURA 01/04/2026
//obs:durante o codigo resovi colocar funcoes pq sim,provavelmente tornei complexo sem necessidade e devo ter cmetido erros,revisei bastante antes de enviar 

#include <stdio.h>
#include <stdlib.h>
 
#define erro 3	//constantes para codigo de erro ou se esta tudo ok
#define ok 4

int validar(int vali,int num);

int calculo_media(int distancia, int litros);

float gasto(int litros, float preco);

int calculo_distancia(int media,int litros);

int calculo_litros(int media, int distancia);

int vali;//varievel global

int main(){
	
	int litros,distancia,opcao,lit,dist,validacao;
	float preco,med;
	/* litros e distancia sao usados na main para media,
	lit e dist para calculos apos isso,
	dentro das funcoes usei litros e distancia normalmente*/
	
	printf("bem vindo ao programa de calculo de consumo de combustivel \n");
	
	do{
	
	printf("digite a distancia percorrida pelo carro:");
	validacao=scanf("%d",&distancia);
	vali=validar(validacao,distancia);
	if(vali==erro){
		printf("numero incalido,tente noovamente");
	}
	
	}while(vali==erro);
	
	do{
	
		printf("digite quantos litros foram gastos:\n");
		validacao=scanf("%d",&litros); //o scanf gera o numer de variaveis lidas quando consegue ler todas,se for menor que isso,nao leu
		vali=validar(validacao,litros);
		if(vali==erro){
		printf("numero incalido,tente noovamente");
		}
		
	}while(vali==erro);
	
	do{
	
		printf("digite o preço da gasolina //L:\n");
		validacao=scanf("%f",&preco); //o scanf gera o numer de variaveis lidas quando consegue ler todas,se for menor que isso,nao leu
		vali=validar(validacao,preco);
		if(vali==erro){
		printf("numero incalido,tente noovamente");
		}
		
	}while(vali==erro);
	
	
	med=calculo_media(distancia,litros);
	
	
	printf("seu consumo medio e de %.2f km\\l \n", med);
	
	printf("seu gasto total sera: R$ %.2f\n",gasto(litros,preco));
	
	
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
			vali=validar(validacao,lit);
	
				}while(vali==erro);
			
			printf("a distancia percorrida sera: %d\n",calculo_distancia(med,lit));
			printf("seu gasto total sera %.2f\n",gasto(lit,preco));
			
		break;
		
		case 2:
			do{
				printf("qual a distancia a percorrer?\n");
			validacao=scanf("%d",&dist);
			vali=validar(validacao,dist);
				
				}while(vali==erro);
				
			lit=dist/med;
			
			printf("serao gastos: %d litros\n ",calculo_litros(med,dist));
			printf("seu gasto total sera %.2f\n",gasto(lit,preco));
			
		break;
		
		default:
			printf("nao foi possibel ler o numero digitado,programa finalizado");
		return erro;	
			
	}
	printf("programa finalizado");
	return 0;
	
}


int validar(int vali, int num){
		int c;//para limpar buffer
			if(vali!=1 || num<=0){   
				while((c=getchar())!='\n' && c!=EOF);//limpa buffer,o getchar joga o buffer dentro da variavel c até encontrar um enter
				return erro;
		}
		return ok;
}

int calculo_media(int distancia,int litros){
		int media;
	
	
	media=distancia/litros; //calculo da media
	
	return media;
}

float gasto(int litros, float preco){
	float gastar;
	gastar=litros*preco;
	
	return gastar;
}

int calculo_distancia(int media,int litros){
	return media*litros;
	
}

int calculo_litros(int media, int distancia){
	return distancia/media;
}
