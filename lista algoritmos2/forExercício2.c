#include<stdio.h>
int main(){
	int n1,soma;
	
		for(n1=1;n1<=100;n1++){
			if(n1 % 2 == 0){
				soma += n1;
				
			}
		}
		
		printf("A soma dos numeros pares de 1 a 100 e igual a %d",soma);
		
		
	return 0;
	
	getch();
	
}
