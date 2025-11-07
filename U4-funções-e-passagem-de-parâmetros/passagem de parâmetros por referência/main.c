//exemplo de passagem de parâmetros por referência usando ponteiros em C
#include <stdio.h>

// Função que altera os valores originais usando ponteiros
void testar(int *n1, int *n2) {
    *n1 = -1;  // altera diretamente o valor original
    *n2 = -2;

    printf("\n\nValores dentro da funcao testar(): ");
    printf("\n n1 = %d e n2 = %d", *n1, *n2);
}

int main(void) {
    int n1 = 10;
    int n2 = 20;

    printf("\n\nValores antes de chamar a funcao: ");
    printf("\n n1 = %d e n2 = %d", n1, n2);

    // Passa os endereços das variáveis para a função
    testar(&n1, &n2);

    printf("\n\nValores depois de chamar a funcao: ");
    printf("\n n1 = %d e n2 = %d\n", n1, n2);

    return 0;
}
