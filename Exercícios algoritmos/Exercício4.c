#include <stdio.h>

int main(void) {
	float a,b,area;
	
	printf("Digite o valor da base: \n");
	scanf("%f", &a);
	
	printf("Digite o valor da altura: \n");
	scanf("%f", &b);
	
	area=(a*b);
	printf("a area do retângulo é: %f", area);
	
	
	return 0;
	
	getch();
}
