#include<stdio.h>
int main(){
	int matriz[3][3];
	int i;
	int j;
	int temp;
	
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("Elemento [%d][%d]: ",i,j);
				scanf("%d",&matriz[i][j]);
			}
		}
		
		for(j=0;j<3;j++){
			temp = matriz[1][j];
			matriz[1][j] = matriz[2][j];
			matriz[2][j] = temp;
		}
		
		printf("\nMatriz apos trocar as linhas 1 e 2:\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d",matriz[i][j]);
			}
			printf("\n");
		}
	return 0;
}
