#include <stdio.h>

int main() {
    int num, multi;

    // Cabeçalho da tabela
    printf("Tabuada de 1 a 10\n\n");

    // Laço externo: multiplicadores (1 a 10)
    for (multi = 1; multi <= 10; multi++) {
        // Laço interno: números da tabuada (1 a 10)
        for (num = 1; num <= 10; num++) {
            printf("%2d x %2d = %3d   ", num, multi, num * multi);
        }
        printf("\n"); // quebra de linha após cada multiplicador
    }

    return 0;
}
