#include<stdio.h>
int main(){
	float salarioB,salarioG;
	
		printf("Digite seu salario base: \n");
		scanf("%f",&salarioB);
		
		salarioG = salarioB *(1 + 0.05);
		
		printf("Seu salario final e %.2f",salarioG);
		
		getch();
		
	return 0;
		
}
