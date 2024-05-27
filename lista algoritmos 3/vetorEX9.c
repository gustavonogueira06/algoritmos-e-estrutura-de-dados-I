#include<stdio.h>
int main(){
	
	int vet[12];
	int i;
	
		printf("Digite 12 numeros: \n");
		for(i=0;i<12;i++){
			scanf("%d",&vet[i]);
		}
		
		for(i=0;i<12;i++){
			if(vet[i]<0){
				vet[i] = 0;
			}
		}
		
		printf("Vetor modificado: \n");
		for(i=0;i<12;i++){
			printf("%d",vet[i]);
		}
		
	return 0;
}
