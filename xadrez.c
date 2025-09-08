#include <stdio.h>

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("=== Movimentos do Xadrez ===\n\n");

    // ---------------- TORRE ----------------
    // Movimento: 5 casas para a direita
    // Estrutura usada: for
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (casa %d)\n", i);
    }
    printf("\n");

    // ---------------- BISPO ----------------
    // Movimento: 5 casas na diagonal para cima e direita
    // Estrutura usada: while
    printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita (casa %d)\n", i);
        i++;
    }
    printf("\n");

    // ---------------- RAINHA ----------------
    // Movimento: 8 casas para a esquerda
    // Estrutura usada: do-while
    printf("Movimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda (casa %d)\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\n=== Fim da Simulacao ===\n");

    return 0;
}
