#include<stdio.h>
int main(){
	int matriz[4][4];
	int i;
	int j;
	int linha,soma = 0;
	
		printf("Digite os elementos da matriz 4x4: \n");
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				printf("Elemento [%d][%d]: \n",i,j);
				scanf("%d",&matriz[i][j]);
			}
		}
		
		if(linha<0 || linha>3){
			printf("Linha invalida,tem que ser um numero de 0 a 3\n");
		}
		
		for(j=0;j<4;j++){
			soma += matriz[linha][j];
		}
		
		printf("A soma dos elementos da linha %d: %d",linha,soma);
		
	return 0;
}
