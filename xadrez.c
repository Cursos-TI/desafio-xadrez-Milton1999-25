#include <stdio.h>

int main() {
    // Quantidade de casas para cada peça se mover
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    printf("Movimento da Torre:\n");
    // TORRE - se move para a direita (usa estrutura FOR)
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    // BISPO - se move na diagonal (usa estrutura WHILE)
    int i = 1;
    while (i <= casas_bispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\nMovimento da Rainha:\n");
    // RAINHA - se move para a esquerda (usa estrutura DO-WHILE)
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casas_rainha);

    return 0;
}
