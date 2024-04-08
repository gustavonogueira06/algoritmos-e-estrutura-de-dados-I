#include<stdio.h>
#include<math.h>
int main(){
	float salario,prestacao,sal;
	
		printf("Digite seu salario: \n");
		scanf("%f",&salario);
		
		printf("Digite a prestação do emprestimo: \n");
		scanf("%f",&prestacao);
		
		sal = salario * 0.2;
		
		if(prestacao < sal){
			printf("Emprestimo concedido");
		}else
			printf("Emprestimo nao concedido");
			
		getch();
		
	return 0;
	
		
		
}
