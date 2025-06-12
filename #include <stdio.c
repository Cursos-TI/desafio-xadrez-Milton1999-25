#include <stdio.h>

// Função recursiva para movimentar a Torre para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva + loops aninhados para movimentar o Bispo na diagonal "Cima Direita"
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;

    // Loop externo: movimento vertical (Cima)
    for (int v = 0; v < 1; v++) {
        // Loop interno: movimento horizontal (Direita)
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }
    moverBispoRecursivo(casas - 1);
}

// Função recursiva para movimentar a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função com loops aninhados complexos para movimentar o Cavalo em "L" (2 Cima, 1 Direita)
void moverCavaloL() {
    int movimentos = 1; // Quantas vezes simular o movimento

    for (int m = 0; m < movimentos; m++) {
        int cima = 0;
        for (int i = 0, j = 2; i < j; i++) {
            if (i == 1) continue; // só para demonstrar controle de fluxo
            printf("Cima\n");
        }

        int direita = 0;
        while (direita < 1) {
            if (direita == -1) break; // condição impossível, só para mostrar uso do break
            printf("Direita\n");
            direita++;
        }
    }
}

// Função principal
int main() {
    // Quantidade de casas para cada movimento
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casas_torre);

    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(casas_bispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casas_rainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavaloL();

    return 0;
}
