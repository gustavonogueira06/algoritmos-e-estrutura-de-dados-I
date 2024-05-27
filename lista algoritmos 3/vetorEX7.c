#include<stdio.h>
int main(){
	
	int vet[30];
	int i;
	int j;
	bool temRepetidos = false;
	
		printf("Digite 30 numeros: \n");
		for(i=0;i<30;i++){
			scanf("%d",&vet[i]);
		}
		
		for(i=0;i<30;i++){
			for(j=i+1;j<30;j++){
				if(vet[i] == vet[j]){
					printf("%d",vet[i]);
					temRepetidos = true;
					break;
				}
			}
		}
		
		if(!temRepetidos){
			printf("Nao existem valores repetidos no vetor");
		}
		
		printf("\n");
		
		
	return 0;
		
		
}
