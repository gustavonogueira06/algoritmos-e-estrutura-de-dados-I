#include<stdio.h>
#include<math.h>
int main(){
	int n1,n2,dif;
	
		printf("Digite um numero: \n");
		scanf("%d",&n1);
		
		printf("Digite outro numero: \n");
		scanf("%d",&n2);
		
		if(n1>n2){
			printf("O numero %d e maior \n",n1);
		}else if(n2>n1){
			printf("O numero %d e maior \n",n2);	
		}else
			printf("O numero e invalido \n");
		
		dif = n1 - n2;
		
		printf("A diferença entre os numeros e %d",dif);
		
		getch();
		
	return 0;
	
}
