#include<stdio.h>
int main(){
	
	int matriz[4][3];
	int i;
	int j;
	
		for(i=0;i<4;i++){
			for(j=0;j<3;j++){
				if((i + j)% 2 == 0){
					matriz[i][j] = 1 - (i + j);
				}else{
					matriz[i][j] = 1 - (i + j);
				}
			}
		}
		
		printf("Matriz 4x3: \n");
		for(i=0;i<4;i++){
			for(j=0;j<3;j++){
				printf("%d",matriz[i][j]);
			}
			printf("\n");
		}
		
	return 0;
}
