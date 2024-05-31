#include<stdio.h>
int main(){
	int totalnumeros=10,i;
	float numero,soma=0,media;
	
		printf("Digite %d numeros\n",totalnumeros);
		 
		for(i=0;i<totalnumeros;i++){
			printf("Numero %d: ",i + 1);
			scanf("%f", &numero);
			soma += numero;
			
		}
		
		media = soma / totalnumeros;
		
		printf("A media dos numeros e igual a %.2f",media);
		
	return 0;
	
	getch();
		
}
