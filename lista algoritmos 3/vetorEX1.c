#include<stdio.h>
int main(){
	
		int numeros[10]; // variavel inteira do vetor com 10 espaços
		int i; //
		
		// leitura dos 10 numeros inteiros
		for(i=0;i<10;i++){
			printf("Digite um numero para ser armazenado no vetor: \n");
			scanf("%d",&numeros[i]);
			}
		
		// imprime os 10 numeros inteiros na tela
		for(i=0;i<10;i++){
			printf("Os valores digitados foram: %d\n",numeros[i]);
		}
		
		
	return 0;	
}
