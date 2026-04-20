#include <stdio.h>

int main() {

    // ================================
    // DECLARAÇÃO DO NAVIO (tamanho 3)
    // ================================
    int navio[3] = {3, 3, 3};

    // ================================
    // TABULEIRO 10x10 (inicializado com 0)
    // ================================
    int tabuleiro[10][10] = {0};

    // ================================
    // POSIÇÃO INICIAL DOS NAVIOS
    // ================================

    // Navio horizontal
    int linhaH = 2;
    int colunaH = 4;

    // Navio vertical
    int linhaV = 5;
    int colunaV = 1;

    // ================================
    // POSICIONANDO NAVIO HORIZONTAL
    // ================================
    for(int i = 0; i < 3; i++){
        tabuleiro[linhaH][colunaH + i] = navio[i];
    }

    // ================================
    // POSICIONANDO NAVIO VERTICAL
    // ================================
    for(int i = 0; i < 3; i++){
        tabuleiro[linhaV + i][colunaV] = navio[i];
    }

    // ================================
    // EXIBINDO O TABULEIRO
    // ================================
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}