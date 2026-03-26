#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float sal,salmin,qtssal;
	salmin=1612,00;
	printf("digite seu salario");
	scanf("%f", &sal);
	qtssal=sal/salmin;
	printf("voce recebe %.2f salarios minimos",qtssal);
	return 0;

}