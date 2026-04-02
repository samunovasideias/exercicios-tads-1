//questao 5

#include <stdio.h>
#include <stdlib.h>

int main(){
	float a,b,c,maior_lado,menor1,menor2;
	printf("para saber de qual tipo um triangulo e,digite o primeiro lado:\n");
	scanf("%f",&a);
	maior_lado=a;
	
	printf("digite o segundo\n");
	scanf("%f",&b);

			printf("digite o terceiro\n");
	scanf("%f",&c);
	

	if(a<b+c && b<a+c && c<a+b){
		
		printf("o triangulo é valido \n");
	}else{
		printf("e impossivel um triangulo com essas medidas");
		return 0;
	}
	
	if(b>=a && b>=c){
		
		maior_lado=b;
		menor1=a;
		menor2=c;
		
	}else
	
	if(c>=a && c>=b){
		
		maior_lado=c;
		menor1=a;
		menor2=b;
		
	}else{
		
		maior_lado=a;
		menor1=b;
		menor2=c;
		
	}
	
	if(maior_lado*maior_lado==menor1*menor1+menor2*menor2){
		printf("e eh retangulo");
	}else
	
	if(maior_lado*maior_lado<menor1*menor1+menor2*menor2){
		printf("e eh acutangulo");
	}else{
		printf("e eh obitusangulo");
	}
	
	return 0;
}