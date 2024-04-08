#include<stdio.h>
int main(){
	int n1,n2;
	
		printf("Digite um numero: \n");
		scanf("%d",&n1);
		
		printf("Digite outro numero: \n");
		scanf("%d",&n2);
		
		if(n1>n2){
			printf("O numero %d e maior",n1);
		}else if(n2>n1){
			printf("O numero %d e maior",n2);
		}else
			printf("Numeros iguais");
			
		getch();
		
	return 0;
	
}
