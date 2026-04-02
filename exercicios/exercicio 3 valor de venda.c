//questao 3
#include <stdio.h>

int main(){
	float custo;
	
	printf("esse aplicativo calcula por quanto o produto sera  vendido de a cordo com o custo dele\n");
	printf("digite o custo\n");
	scanf("%f",&custo);
	
	if(custo<20){
		
		printf("o produto sera vendido por R$ %.2f",custo*145/100);//um produto mais 45% é o mesmo que multiplicar por 145/100
		
	}else{
		
		printf("o produto sera vendido por R$ %.2f",custo*130/100);
	}
return 0;
}
