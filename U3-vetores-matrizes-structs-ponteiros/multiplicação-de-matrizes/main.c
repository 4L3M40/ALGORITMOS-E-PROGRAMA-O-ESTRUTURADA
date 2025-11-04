// Multiplicacao de Matrizes em C
#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k;
    int soma;

    // Entrada das dimensoes
    printf("Digite as dimensoes da primeira matriz (m x n): ");
    scanf("%d %d", &m, &n);

    printf("Digite as dimensoes da segunda matriz (p x q): ");
    scanf("%d %d", &p, &q);

    // Verificacao se a multiplicacao e possivel
    if (n != p) {
        printf("A multiplicacao entre as matrizes nao e possivel.\n");
        return 0;
    }

    // Declaracao das matrizes
    int matriz1[m][n], matriz2[p][q], resultado[m][q];

    // Entrada da primeira matriz
    printf("Digite os elementos da primeira matriz:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Entrada da segunda matriz
    printf("Digite os elementos da segunda matriz:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Calculo do produto das matrizes
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            soma = 0;
            for (k = 0; k < n; k++) { // n == p
                soma += matriz1[i][k] * matriz2[k][j];
            }
            resultado[i][j] = soma;
        }
    }

    // Impressao do resultado
    printf("O produto das matrizes e:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
