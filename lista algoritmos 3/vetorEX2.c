#include<stdio.h>
int main(){
	
	int vetor[15]; // variavel inteira que tem 15 espaços 
	int i;
	int maior; // maior numero
	int menor; // menor numero
	
		// le os numeros para armazenar no vetor
		for(i=0;i<15;i++){
			printf("Digite um numero: \n");
			scanf("%d",&vetor[i]);
		}	
		
		// faz as variaveis ver desde o primeiro numero do vetor
		maior = menor = vetor[0];
		
		// verifica o maior e menor numero
		for(i=1;i<15;i++){
		
			if(vetor[i]>maior){
				maior = vetor[i];
			}
			
			if(vetor[i]< menor){
				menor = vetor[i];
			}
		
		}
		
		printf("O maior numero do vetor e %d e o menor e %d",maior,menor);
		
		
	return 0;
		
}
