//exemplo de função com parâmetros que retorna um valor inteiro
#include <stdio.h>

// Função que soma dois números inteiros
int somar(int x, int y) {
    return x + y;  // não precisa criar variável extra
}

int main(void) {
    int resultado = somar(4, 5); // passando 4 e 5 como argumentos

    printf("O resultado da funcao e = %d\n", resultado); // imprime 9

    return 0;
}
