// Programa para imprimir um triângulo de asteriscos alinhado ao centro
#include <stdio.h>

int main() {
    int linhas, i, j, espacos, estrelas;

    printf("Digite o numero de linhas do triangulo: ");
    scanf("%d", &linhas);

    for (i = 1; i <= linhas; i++) {
        // calcula quantos espaços e quantos * em cada linha
        espacos = linhas - i;
        estrelas = 2 * i - 1;

        // imprime os espaços
        for (j = 1; j <= espacos; j++) {
            printf(" ");
        }

        // imprime os asteriscos
        for (j = 1; j <= estrelas; j++) {
            printf("*");
        }

        printf("\n"); // quebra de linha
    }

    return 0;
}
