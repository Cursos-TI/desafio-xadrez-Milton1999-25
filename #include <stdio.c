#include <stdio.h>

int main() {
    // Quantidade de casas para cada peça se mover
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    printf("Movimento da Torre:\n");
    // TORRE - usa FOR
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    // BISPO - usa WHILE
    int i = 1;
    while (i <= casas_bispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\nMovimento da Rainha:\n");
    // RAINHA - usa DO-WHILE
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casas_rainha);

    printf("\nMovimento do Cavalo:\n");
    // CAVALO - movimento em L: duas casas para baixo, uma para a esquerda
    // Usa FOR (externo) + WHILE (interno)

    int movimentos = 1; // Quantas vezes simular o movimento do cavalo
    for (int m = 1; m <= movimentos; m++) {
        // Duas casas para baixo (FOR obrigatório)
        for (int k = 1; k <= 2; k++) {
            printf("Baixo\n");
        }

        // Uma casa para a esquerda (WHILE)
        int l = 0;
        while (l < 1) {
            printf("Esquerda\n");
            l++;
        }
    }

    return 0;
}
