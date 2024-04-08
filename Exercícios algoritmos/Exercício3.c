#include <stdio.h>

int main(void) {
	float a,b,area;
	
	printf("Digite o valor da base: \n");
	scanf("%f", &a);
	
	printf("Digite o valor da altura: \n");
	scanf("%f", &b);
	
	area=(a*b)/2;
	printf("a area do triangulo é: %f", area);
	
	
	return 0;
	
	getch();
}
