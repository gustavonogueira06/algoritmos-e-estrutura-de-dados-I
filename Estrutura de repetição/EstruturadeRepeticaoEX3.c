#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	
	int tamanho=100;
	int i=0, impar=0;
	
		for(i=1;i<=tamanho;i++){
			
			impar = 1%2;
			
			if(impar != 0){
				printf("%d",i);
			}
		}
		
	return 0;
	
	getch();
}
