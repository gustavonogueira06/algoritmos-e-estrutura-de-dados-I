#include<stdio.h>
int main(){
	int n1,ant,suc;
	
		printf("Digite um numero inteiro: \n");
		scanf("%d",&n1);
		
		ant = n1-1;
		
		suc = n1+1;
		
		printf("O antecessor do numero digitado e %d\n",ant);
		printf("O sucessor do numero digitado e %d",suc);
		
		getch();
		
	return 0;
		
		
}
