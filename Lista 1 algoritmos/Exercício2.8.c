#include<stdio.h>
int main(){
	float n1,n2,media;
	
		printf("Digite sua primeira nota: \n");
		scanf("%f",&n1);
		
		printf("Digite sua segunda nota: \n");
		scanf("%f",&n2);
		
		media = (n1 + n2)/2;
		
		if(n1>0 & n1<=10){
			printf("A nota e valida \n");
		}else if(n2>0 & n2<=10){
			printf("A nota e valida \n");
		}else
			printf("As notas sao invalidas \n");
			
		printf("A media das notas e %.1f",media);
			
		getch();
		
	return 0;
	
}
