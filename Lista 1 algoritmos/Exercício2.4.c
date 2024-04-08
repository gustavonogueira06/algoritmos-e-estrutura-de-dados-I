#include<stdio.h>
#include<math.h>
int main(){
	float n1;
	
		printf("Digite um numero: \n");
		scanf("%f",&n1);
		
		if(n1>0){
			printf("O numero é positivo, o quadrado e %f ",n1*n1);
			printf("e a raiz e %f", sqrt(n1));
		}else
			printf("O numero e invalido");
		
		getch();
		
	return 0;
}
