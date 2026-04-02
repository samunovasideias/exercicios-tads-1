//questao 6
#include <stdio.h>

int  main(){
	int horas,pagar;
	
	printf("sistema de pagamento do estacionamento\n quantas horas o carro ficou estacionado?\ndigite apenas o valor inteiro das horas\n");
	scanf("%d",&horas);
	
	if(horas<=1){
		pagar=5;
	}else{
		pagar=5+(horas-1)*3;
	}
	printf("o total a pagar e : R$ %d",pagar);
	
	return 0;
}