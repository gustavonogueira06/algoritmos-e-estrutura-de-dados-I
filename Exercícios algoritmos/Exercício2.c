#include <stdio.h>

int main(void) {
	int a,b,mult;
	
	printf("Digite o primeiro numero: \n");
	scanf("%d", &a);
	
	printf("Digite o segundo numero: \n");
	scanf("%d", &b);
	
	mult=a*b;
	printf("o produto é: %d", mult);
	
	
	return 0;
	
	getch();
}
