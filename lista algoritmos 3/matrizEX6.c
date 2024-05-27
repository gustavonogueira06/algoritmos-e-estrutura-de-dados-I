#include<stdio.h>
int main(){
	
	int matriz[3][3];
	int i;
	int j;
	
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("Elemento [%d][%d]:",i,j);
				scanf("%d",&matriz[i][j]);
			}
		}
		
		printf("\nLinha das colunas:\n");
		for(i=0;i<3;i++){
			printf("Linha %d: ",i);
			for(j=0;j<3;j++){
			printf("%d",matriz[i][j]);	
			}
			printf("\n");
		}
		
		printf("\nColunas da matriz:\n");
		for(i=0;i<3;i++){
			printf("Coluna %d: ",i);
			for(j=0;j<3;j++){
			printf("%d",matriz[i][j]);	
			}
			printf("\n");
		}
		
	return 0;
}
