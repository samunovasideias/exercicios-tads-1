//questao 4

#include <stdio.h>

#define sal_minimo 1621.00 //valor de referendia do sal minomo para calculos

int main(){
	
	float sal_bruto,sal_liquido;
	
	printf("para calcular seu salario liquido,digite-o\n");
	scanf("%f", &sal_bruto);
	
	if(sal_bruto<=1500){
		
		sal_liquido=sal_bruto-(sal_bruto*8/100);
		
	}else 
	if(sal_bruto>1500){
		
		sal_liquido=sal_bruto-(sal_bruto*9/100);
		
	}else{
		
		sal_liquido=sal_bruto-(sal_bruto*11/100);
	}
	
	printf("\nseu salario liquido e: R$ %.2f e equivale a %.2f salarios minimos \n" ,sal_liquido,sal_liquido/sal_minimo);
	printf("\nja seu salario bruto equivale a %.2f \n",sal_bruto/sal_minimo);
	return 0;
}