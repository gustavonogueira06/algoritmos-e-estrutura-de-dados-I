#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
int main(){
	
	int linha,coluna;
	
	linha=1;
	while(linha<=10){
		coluna=1;
		
		while(coluna<=linha){
			
			printf("*");
			coluna++;
		}
	printf("\n");
	linha++;
	
	}
	
	return 0;
	
	getch();
}
