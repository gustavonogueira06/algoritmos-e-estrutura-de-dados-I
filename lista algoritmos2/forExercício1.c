#include<stdio.h>
int main(){
	int n1,i;
	
		printf("Digite um numero: \n");
		scanf("%d",&n1);
		
		for(i=2;i<=n1;i++){
			if(i % 2 == 0){
				printf("%d\n",i);
			}
		}
		
	return 0;
	
	getch();
	
}
