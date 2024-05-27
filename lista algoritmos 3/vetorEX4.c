#include<stdio.h>
int main(){
	
		int vetor[8]; // variavel inteira que tem 8 espaços
		int i;
		
		// le os numeros digitados
		for(i=0;i<8;i++){
			printf("Digite um numero: \n");
			scanf("%d",&vetor[i]);
		}
		
		// imprime os numeros na ordem inversa
		for(i=7;i<=0;i--){
			printf("%d",vetor[i]);
			
		}
		
		
	return 0;	
}
