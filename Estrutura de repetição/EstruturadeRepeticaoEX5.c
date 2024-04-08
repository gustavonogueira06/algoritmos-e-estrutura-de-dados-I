#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
int main(){
	
	int x=0,t=0,tabuada=0;
	
		printf("Digite um numero: \n");
		scanf("%d",&x);
		
		while(t<=10){
			
			tabuada = x*t;
			printf("\n%d x %d = %d",x,t,tabuada);
			t++;
		}
		
	return 0;
	
	getch();
}

