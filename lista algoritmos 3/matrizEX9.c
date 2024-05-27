#include<stdio.h>
int main(){
	int matriz[3][3];
	int i;
	int j;
	
		printf("Digite os elementos da matriz 3x3: \n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("Digite o elemento [%d][%d]: \n",i,j);
				scanf("%d",&matriz[i][j]);
			}
		}
		
		printf("\nElementos da diagonal principal: \n");
		for(i=0;i<3;i++){
			printf("%d",matriz[i][j]);
		}
		printf("\n");
		
	return 0;
}
