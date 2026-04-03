//questao 7 listar 3 numeros inteiros de forma decrescente

#include <stdio.h>

int main(){
	int a,b,c,maior,meio,menor;
	int d; // para limpar buffer
	printf("para saber a ordem crescente de 3 numeros,digite o primeiro\n");
	scanf("%d",&a);
	while((d=getchar())!= '\n' && d!=EOF);// limpei o buffer pq as variaveis estavam recebendo lixo de memoria
	
	printf("digite o degundo\n");
	scanf("%d",&b);  
	while((d=getchar())!= '\n' && d!=EOF);
	
	printf("digite o terceiro\n");
	scanf("%d",&c);
	while((d=getchar())!= '\n' && d!=EOF);

	if(a>=c && a>=b){
		maior=a;
		if(b>=c){
			meio=b;
			menor=c;
		}else{
			meio=c;
			menor=b;
		}
	}else
	if(b>=c && b>=a){
		maior=b;
		if(a>=c){
			meio=a;
			menor=c;
		}else{
			meio=c;
			menor=a;
		}
	}else
	if(c>=a && c>=b){
		maior=c;
		if(b>=a){
			meio=b;
			menor=a;
		}else{
			meio=a;
			menor=b;
		}
	}
	
	printf("maior:%d \n segundo maior:%d \nmenor:%d",maior,meio,menor);
	
}