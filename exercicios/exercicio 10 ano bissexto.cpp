//questao 10

#include <stdio.h>

#define bissexto 1
#define n_bissexto 2
int analisar(int an){
	if(an%400==0){
		return bissexto;
	}else
	if(an%4==0 && an%100!=0){
		return bissexto;
	}else{
		return n_bissexto;
	}
}
int main(){
	int ano,analise;
	
	printf("para saber se um ano e bissexto,digite-o:\n");
	scanf("%d",&ano);
	analise=analisar(ano);
	if(analise==bissexto){
		printf("%d e bissexto",ano);
	}else{
		printf("%d nao e bissexto",ano);
	}
	
	return 0;
}