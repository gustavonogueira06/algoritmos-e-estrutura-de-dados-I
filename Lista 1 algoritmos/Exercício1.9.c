#include <stdio.h>
int main(){
    float valor_total, valor_com_desconto, valor_parcela, comissao_vista, comissao_parcelada;
    float desconto = 0.10; 
    float taxa_comissao = 0.05; 
    int numero_parcelas = 3;

    	   printf("Digite o valor total da venda: ");
    	   scanf("%f", &valor_total);

           valor_com_desconto = valor_total * (1 - desconto);

           valor_parcela = valor_total / numero_parcelas;

           comissao_vista = valor_com_desconto * taxa_comissao;

           comissao_parcelada = valor_total * taxa_comissao;

		   printf("1. Total a pagar com desconto de 10%%: R$ %.2f\n", valor_com_desconto);
           printf("2. Valor de cada parcela (em %d parcelas sem juros): R$ %.2f\n", numero_parcelas, valor_parcela);
           printf("3. Comissão do vendedor (venda à vista): R$ %.2f\n", comissao_vista);
           printf("4. Comissão do vendedor (venda parcelada): R$ %.2f\n", comissao_parcelada);
           
           getch();


    return 0;
}

