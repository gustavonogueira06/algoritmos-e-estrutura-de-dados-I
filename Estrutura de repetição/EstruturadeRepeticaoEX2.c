#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	float preco;
	
		printf("Digite o preco do produto: \n");
		scanf("%f",&preco);
		
		if(preco < 100){
			preco = preco*1.1;
			printf("O produto e menor que 100, o preco dele inflacionado e %f");
		}else{
			preco = preco*1.2;
			printf("O produto e maior ou igual a 100, o preco dele inflacionado e %f");
		}
		
	return 0;
	
	getch();
}
