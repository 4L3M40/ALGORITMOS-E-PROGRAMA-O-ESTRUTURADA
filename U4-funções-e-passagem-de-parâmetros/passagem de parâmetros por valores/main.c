//exemplo de passagem de parâmetros por valores em C
#include <stdio.h>

// Função que recebe dois inteiros e altera seus valores
int testar(int n1, int n2) {
    n1 = -1;  // altera apenas a cópia local
    n2 = -2;

    printf("\n\nValores dentro da funcao testar(): ");
    printf("\n n1 = %d e n2 = %d", n1, n2);

    return 0;
}

int main(void) {
    int n1 = 10;
    int n2 = 20;

    printf("\n\nValores antes de chamar a funcao: ");
    printf("\n n1 = %d e n2 = %d", n1, n2);

    testar(n1, n2);  // passa cópias dos valores

    printf("\n\nValores depois de chamar a funcao: ");
    printf("\n n1 = %d e n2 = %d\n", n1, n2);

    return 0;
}
