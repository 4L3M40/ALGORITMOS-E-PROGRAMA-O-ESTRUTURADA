//exemplo de função que retorna um valor inteiro
#include <stdio.h>

// Função que retorna a soma de 2 + 3
int somar(void) {
    return 2 + 3;
}

int main(void) {
    int resultado = somar();

    printf("O resultado da funcao e = %d\n", resultado);

    return 0;
}
