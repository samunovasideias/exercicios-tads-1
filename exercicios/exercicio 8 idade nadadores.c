//questao 8
 #include <stdio.h>
 
 int main(){
 	int idade;
 	printf("para saber de qual categoria da natacao voce pertence,digite sua idade:\n");
 	scanf("%d",&idade);
 	
 	if(idade>=5 && idade<=7){
 		
 		printf("sua categoria e infabtil A");
 		
	 }else
	 if(idade>=8 && idade<=10){
	 	
	 	printf("sua categoria e infantil B");
	 }else
	 if(idade>=11 && idade<=13){
	 	
	 	printf("sua categoria e juvenil A");
	 }else
	 if(idade>=14 && idade<=17){
	 	
	 	printf("sua categoria e juvenil B");
	 }else
	 if(idade>=18 ){
	 	
	 	printf("sua categoria e senior");
	 }else{
	 	printf("idade insuficiente");
	 }
	 
	 return 0;
 }