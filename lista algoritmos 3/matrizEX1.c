#include<stdio.h>
int main(){
	
	int matriz [3][3];
	int i,j;
	
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("Digite o elemento [%d] [%d] \n",i,j);
				scanf("%d",&matriz[i][j]);
			}
		}
		
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("O elemento da [%d] [%d] = %d\n",i,j,matriz[i][j]);
			}
				
		}
				
				
	return 0;
	
}
