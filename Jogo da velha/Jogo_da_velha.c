#include <stdio.h> 
#include <stdlib.h> 

int l, c; // Variáveis 

// Função para exibir o tabuleiro 
void exibirTabuleiro(char tabuleiro[3][3]) {
    printf("\n 0   1   2\n\n"); // Imprime os índices das colunas
    for(l = 0; l < 3; l++) { // Percorre cada linha
        for(c = 0; c < 3; c++) { // Percorre cada coluna
            printf(" %c ", tabuleiro[l][c]); // Imprime o conteúdo 
            if(c < 2) // Se não for a última coluna, imprime um separador
                printf("|");
            if(c == 2) // Se for a última coluna, imprime o índice da linha
                printf("  %d", l);
        }
        if(l < 2) // Se não for a última linha, imprime um separador de linha
            printf("\n---|---|---");
        printf("\n");
    }
}

int main(){
    // Estrutura do jogo
    char tabuleiro[3][3]; // Matriz para o tabuleiro
    int l, c, linha, coluna, jogador = 1, g = 0, j = 0; // Variáveis para o jogo

    printf("SEJA BEM-VINDO AO JOGO DA VELHA!\n");
    
    // Inicializa o tabuleiro com espaços em branco
    for(l = 0; l < 3; l++) {
        for(c = 0; c < 3; c++) {
            tabuleiro[l][c] = ' '; // Define cada célula como vazia
        }
    }

    do {
        exibirTabuleiro(tabuleiro); // Mostra o tabuleiro

        // Coordenadas do jogador
        do {
            printf("\nO jogador de numero %d deve entrar com a linha e coluna de sua escolha para jogar, EX:0 1: ", jogador);
            scanf("%d%d", &linha, &coluna); // Recebe a linha e coluna da jogada
        } while(linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' '); // Valida a entrada

        // Coloca coordenada no tabuleiro
        if(jogador == 1) {
            tabuleiro[linha][coluna] = '0'; // Marca com 0 se for jogador 1
            jogador++; // Alterna para o próximo jogador
        } else {
            tabuleiro[linha][coluna] = 'X'; // Marca com X se for jogador 2
            jogador = 1; // Muda para o próximo jogador
        }
        j++; // Incrementa o contador de jogadas

        // Verifica se algum jogador ganhou nas linhas
        if((tabuleiro[0][0] == '0' && tabuleiro[0][1] == '0' && tabuleiro[0][2] == '0') || 
           (tabuleiro[1][0] == '0' && tabuleiro[1][1] == '0' && tabuleiro[1][2] == '0') || 
           (tabuleiro[2][0] == '0' && tabuleiro[2][1] == '0' && tabuleiro[2][2] == '0')) {
            printf("\nO jogador de numero 1 venceu!\n");
            g = 1; // Mostra que o jogo terminou
        }

        if((tabuleiro[0][0] == 'X' && tabuleiro[0][1] == 'X' && tabuleiro[0][2] == 'X') || 
           (tabuleiro[1][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[1][2] == 'X') || 
           (tabuleiro[2][0] == 'X' && tabuleiro[2][1] == 'X' && tabuleiro[2][2] == 'X')) {
            printf("\nO jogador de numero 2 venceu!\n");
            g = 1; // Mostra que o jogo terminou
        }

        // Verifica se algum jogador ganhou nas colunas
        if((tabuleiro[0][0] == '0' && tabuleiro[1][0] == '0' && tabuleiro[2][0] == '0') ||
           (tabuleiro[0][1] == '0' && tabuleiro[1][1] == '0' && tabuleiro[2][1] == '0') ||
           (tabuleiro[0][2] == '0' && tabuleiro[1][2] == '0' && tabuleiro[2][2] == '0')) {
            printf("\nO jogador de numero 1 venceu!\n");
            g = 1; // Mostra quu o jogo terminou
        }

        if((tabuleiro[0][0] == 'X' && tabuleiro[1][0] == 'X' && tabuleiro[2][0] == 'X') ||
           (tabuleiro[0][1] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][1] == 'X') ||
           (tabuleiro[0][2] == 'X' && tabuleiro[1][2] == 'X' && tabuleiro[2][2] == 'X')) {
            printf("\nO jogador de numero 2 venceu!\n");
            g = 1; // Mostra que o jogo terminou
        }   

        // Verifica se algum jogador ganhou nas diagonais
        if((tabuleiro[0][0] == '0' && tabuleiro[1][1] == '0' && tabuleiro[2][2] == '0') ||
           (tabuleiro[0][2] == '0' && tabuleiro[1][1] == '0' && tabuleiro[2][0] == '0')) {
            printf("\nO jogador de numero 1 venceu!\n");
            g = 1; // Mostra que o jogo terminou
        }

        if((tabuleiro[0][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][2] == 'X') ||
           (tabuleiro[0][2] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][0] == 'X')) {
            printf("\nO jogador de numero 2 venceu!\n");
            g = 1; // Mostra que o jogo terminou
        }

    } while(g == 0 && j < 9); // Continua o jogo até que alguém ganhe ou todas as jogadas sejam feitas

    // Exibir o tabuleiro final
    exibirTabuleiro(tabuleiro); // Exibe o tabuleiro final

    if(g == 0) {
        printf("\nA partida terminou em um empate, nenhum dos jogadores venceu\n"); // Empate
    }

    printf("\nDesenvolvedor: Gustavo Gomes Nogueira\n"); // Nome do desenvolvedor

    return 0; 
}

