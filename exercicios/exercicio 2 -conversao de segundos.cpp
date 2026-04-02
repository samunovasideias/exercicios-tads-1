//segundos para horas,minutos e segundos
#include <stdio.h>
#include <stdlib.h>

int main(){
	int segundos;
	printf("este programa transforma segundos em horas,minutos e segundos,digite um valor");
	scanf("%d",&segundos);
	printf("%d segundos sao: %.0d horas %.0d minutos %.0d segundos",segundos,segundos/3600,(segundos%3600)/60,(segundos%3600)%60);
	/*meu raciocinio:1 hora sao 3600 segundos,entao dividi os segundos por isso e peguei a parte inteira
	peguei o resto da divisao e dividi por 60 para decobrir os minutos,o resto dessa divisao será os segundos*/
	return 0;
}
