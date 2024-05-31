#include<stdio.h>
int main(){
	int n1=10,i;
		
		printf("Digite seu palpite de qual o numero: \n");
		scanf("%d",&i);
		
		while(i != n1){
			printf("Tente novamente: \n");
			scanf("%d",&i);
		}
		
		printf("Parabens voce acertou o numero!");
		
	return 0;
	
	getch();
}
