//exercicio 9
#include <stdio.h>

int main(){
	float saldo,credito;
	
	printf("para saber seu credito,digite seu saldo medio no ultimo ano:\n");
	scanf("%f",&saldo);
	if(saldo>=201 && saldo<401){
		credito=saldo*20/100;
	}else
	if(saldo>=401 && saldo<601){
		credito=saldo*30/100;
	}else
	if(saldo>=601){
		credito=saldo*40/100;
	}else{
		printf("nenhum credito para esse saldo,pobre");
		return 0;
	}
	printf("para o saldo medio de R$ %.2f, o credito disponivel e: R$ %.2f",saldo,credito);
	
	return 0;
}