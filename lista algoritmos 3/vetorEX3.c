#include<stdio.h>
int main(){
	
	float vetor[20]; // variavel real que tem 20 espaços
	int i; // o indice i sempre sera inteiro
	float soma=0;
	float media;
	
		// le os numeros digitados
		for(i=0;i<20;i++){
			printf("Digite um numero: \n");
			scanf("%d",&vetor[i]);
			soma += vetor[i]; // soma cada numero armazenado no vetor
		}
		
		media = soma / 20; // media
		
		printf("A media dos numeros do vetor e %f",media);
		
	return 0;
		
}
