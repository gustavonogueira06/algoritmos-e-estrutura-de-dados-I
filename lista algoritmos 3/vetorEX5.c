#include<stdio.h>
int main(){
	
	int vet[10];
	int i;
	int count=0;
		
		printf("Digite 10 numeros: \n");
		for(i=0;i<10;i++){
			scanf("%d",&vet[i]);
		}
		
		for(i=0;i<10;i++){
			if(vet[i] % 2 ==0){
				count++;
			}
		}
		
		printf("Os numeros pares sao: %d\n",count);
		
	
		
	return 0;	
	
}
