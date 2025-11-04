// Programa para calcular a soma dos elementos da diagonal principal e secundária de uma matriz 3x3
#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int sDiagPrinc = 0, sDiagSec = 0;

    // Leitura da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Impressão da matriz em formato de tabela
    printf("\nMatriz digitada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // quebra de linha a cada linha da matriz
    }

    // Cálculo das diagonais
    for (i = 0, j = 2; i < 3 && j >= 0; i++, j--) {
        sDiagPrinc += matriz[i][i];
        sDiagSec   += matriz[i][j];
    }

    // Resultados
    printf("\nSoma dos elementos da diagonal principal: %d\n", sDiagPrinc);
    printf("Soma dos elementos da diagonal secundaria: %d\n", sDiagSec);

    return 0;
}
