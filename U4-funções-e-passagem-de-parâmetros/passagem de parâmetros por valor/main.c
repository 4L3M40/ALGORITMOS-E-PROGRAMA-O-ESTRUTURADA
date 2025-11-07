//exemplo de passagem de parâmetros por valor
#include <stdio.h>

// Função que soma dois números inteiros
int somar(int a, int b) {
    return a + b;
}

int main(void) {
    int res;  // variável para armazenar o resultado

    res = somar(10, 15);

    printf("\nResultado da soma = %d\n", res);

    return 0;
}
