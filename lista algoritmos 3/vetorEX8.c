#include<stdio.h>
int main(){
	
	int vet[15];
	int i;
	int j;
	int n = 15;
	int min_idx;
	
	printf("Digite 15 numeros: \n");
	for(i=0;i<15;i++){
		scanf("%d",&vet[i]);
	}
	
	for(i=0;i<n - 1;i++){
		min_idx = i;
		for(j=i+1;j<n;j++){
			if(vet[j]<vet[min_idx]){
				min_idx = j;
			}
		} 
		
		
		int temp = vet[min_idx];
		vet[min_idx] = vet[i];
		vet[i] = temp;
	}
	
	printf("Vetor ordenado em ordem crescente: \n");
	for(i=0;i<15;i++){
		printf("%d\n",vet[i]);
	}
	
	return 0;
	
	
}
