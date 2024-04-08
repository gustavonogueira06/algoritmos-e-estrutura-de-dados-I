#include<stdio.h>
int main(){
	float real,dolar,RpD;
	
		printf("Digite um valor em real: \n");
		scanf("%f",&real);
		
		printf("Digite a cotaçao do dolar:  \n");
		scanf("%f",&dolar);
		
		RpD = real/dolar;
		
		printf("O valor digitado em real e %f em dolar",RpD);
		
		getch();
		
	return 0;
	
}
