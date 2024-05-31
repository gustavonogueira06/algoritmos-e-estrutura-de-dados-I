#include<stdio.h>
int main(){
	int n1,i;
	
		printf("Digite seu palpite de qual o numero: \n");
		scanf("%d",&i);
	
		for(n1=10;i!=n1;){
			printf("tente novamente: ");
			scanf("%d",&i);
			
		}
		
		printf("Parabens voce acertou o numero!");
		
		
	return 0;
	
	getch();
}
