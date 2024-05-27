#include<stdio.h>
int main(){
	
	int vetA[10];
	int vetB[10];
	int i;
	
		printf("Digite 10 numeros: \n");
		for(i=0;i<10;i++){
			scanf("%d",&vetA[i]);
		}
		
		
		for(i=0;i<10;i++){
			vetB[i] = vetA[i];
		}
		
		printf("Os numeros do vetor A foram para o B: \n");
		for(i=0;i<10;i++){
			printf("%d\n",vetB[i]);
			vetB[i]++;
		}
		
	return 0;
}
