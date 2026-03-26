#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	float raio,pi=3.14,comprimento,diametro;
	int op;
	do{
	printf("bem vindo ao calculador de comprimento de circuferencias,qual dado vc tem em maos? \n1.raio \n2.diametro");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("digite o raio");
			scanf("%f",&raio);
			break;
		case 2:
			printf("digite o diametro");
			scanf("%f",&diametro);
			raio=diametro/2;
			break;
		default:
			printf("opcao nao identificada,digite novamente\n");
		}
	}while(op!=1 && op!=2);
	comprimento=2*pi*raio;
	printf("o comprimento da circuferencia eh:%.2f",comprimento);
	return 0;
}