#include<stdio.h>
#include<math.h>
int main(){
	float n1;
		
		printf("Digite um numero: \n");
		scanf("%f",&n1);
		
		if(n1>0){
			printf("O numero e positivo, a raiz quadrada e %f", sqrt(n1));
		}else if (n1<0){
			printf("O numero e negativo, o quadrado e %f",n1*n1);	
		}
		
		getch();
		
	return 0;
}
