#include<stdio.h>
int main(){
	
	int matriz[3][2];
	int i;
	int j;
	
		for(i=0;i<3;i++){
			for(j=0;j<2;j++){
				matriz[i][j] = 0;
			}
		}
		
		printf("Matriz 3x2: \n");
		for(i=0;i<3;i++){
			for(j=0;j<2;j++){
				printf("%d",matriz[i][j]);
			}
			printf("\n");
		}
		
	return 0;
}
