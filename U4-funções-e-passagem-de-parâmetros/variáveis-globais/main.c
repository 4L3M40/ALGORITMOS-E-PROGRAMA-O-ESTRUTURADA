//exemplo de uso de variável global em C
#include <stdio.h>

// Variável global
int x = 10;

// Função que usa a variável global
int dobrar(void) {
    return 2 * x;
}

int main(void) {
    printf("\nValor de x global = %d", x);
    printf("\nValor de x global alterado na funcao dobrar() = %d\n", dobrar());

    return 0;
}
