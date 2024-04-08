#include <stdio.h>
int main(){
	int i,n1, n2;
	
		printf("Digite o primeiro valor :\n");
		scanf("%d",&n1);
		
		printf("Digite o segundo valor: \n");
		scanf("%d",&n2);
		
		if(n1 == n2){
			printf("Valores iguais");
		}else if(n1 < n2){
			for(i=n1;i<=n2;i++){
				printf("%d ",&i);
			}
			
		}else{
		
			for(i=n1;i>=n2;i--){
				printf("%d ",i);
			}
	
	}
	
	return 0;
	
	getch();		
}

