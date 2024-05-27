#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int n;
	int i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&n);
	
	int *vet = (int *)malloc(n * sizeof(int));
	
	printf("Digite o %d de elementos do vetor: \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&vet[i]);
	}
	
	printf("%d\n",vet[i]);
	
	
	return 0;
	
}
