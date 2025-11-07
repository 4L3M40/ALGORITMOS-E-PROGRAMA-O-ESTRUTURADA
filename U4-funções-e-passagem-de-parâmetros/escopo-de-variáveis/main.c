// exemplo de escopo de variáveis 
#include <stdio.h>

// Função que retorna um valor inteiro
int testar(void) {
    int x = 10;
    return x;
}

int main(void) {
    int x = 20;

    printf("\nValor de x na funcao main() = %d", x);
    printf("\nValor de x na funcao testar() = %d\n", testar());

    return 0;
}
