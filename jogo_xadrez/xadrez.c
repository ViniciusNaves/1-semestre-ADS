#include <stdio.h>

int main() {

    // ============================
    // TORRE (FOR)
    // ============================
    int casasTorre = 5;

    printf("=== Movimento da Torre ===\n");

    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // ============================
    // BISPO (WHILE)
    // ============================
    int casasBispo = 5;
    int j = 0;

    printf("\n=== Movimento do Bispo ===\n");

    while (j < casasBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // ============================
    // RAINHA (DO-WHILE)
    // ============================
    int casasRainha = 8;
    int k = 0;

    printf("\n=== Movimento da Rainha ===\n");

    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);

    // ============================
    // CAVALO (LOOPS ANINHADOS)
    // ============================

    printf("\n=== Movimento do Cavalo ===\n");

    int passosBaixo = 2;
    int passosEsquerda = 1;

    // Loop externo (FOR) → movimento principal (vertical)
    for (int x = 0; x < passosBaixo; x++) {
        printf("Baixo\n");

        // Quando terminar de descer, executa o movimento lateral
        if (x == passosBaixo - 1) {

            int y = 0;

            // Loop interno (WHILE) → movimento horizontal
            while (y < passosEsquerda) {
                printf("Esquerda\n");
                y++;
            }
        }
    }

    return 0;
}