// Programa para classificar um número em diferentes faixas
#include <stdio.h>

int main() {
    int num = 10;

    if (num < 100) {
        printf("Menor que 100\n");
    } else if (num < 1000) {
        printf("Menor que 1000\n");
    } else if (num < 10000) {
        printf("Menor que 10000\n");
    } else {
        printf("Maior ou igual a 10000\n");
    }

    return 0;
}
