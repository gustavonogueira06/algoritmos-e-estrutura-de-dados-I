#include<stdio.h>
int main(){
	int contador=0; 
	float numero, soma , media;
	
		printf("Digite 5 numeros: \n");
		
		while(contador < 5){
			printf("numero %d: ",contador + 1);
			scanf("%f",&numero);
			soma += numero;
			contador++;
		}
		
		media = soma / 5;
		
		printf("A media dos numeros e igual a %.2f",media);
		
	return 0;
	
	getch();
}
