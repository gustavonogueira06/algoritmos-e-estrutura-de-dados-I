#include<stdio.h>
#include<stdbool.h>
int main(){
	int matriz[2][2];
	int i;
	int j;
	int elemento;
	bool encontrado = false;
	
		printf("Digite os elementos da matriz 2x2: \n");
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("Elemento [%d][%d]: ",i,j);
				scanf("%d",&matriz[i][j]);
			}
		}
		
		printf("Digite o elemento a ser buscado: ");
		scanf("%d",&elemento);
		
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				if(matriz[i][j] == elemento){
					encontrado = true;
					break;
				}
			}
			if(encontrado){
				break;
			}
		}
		
		if(encontrado){
			printf("Elemento %d encontrado na matriz\n",elemento);
		}else{
			printf("Elemento %d nao encontrado na matriz\n",elemento);
		}
		
	return 0;
	
}
