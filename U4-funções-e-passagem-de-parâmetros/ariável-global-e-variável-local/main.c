//exemplo de variável global e variável local com o mesmo nome
#include <stdio.h>

// Variável global
int x = 10;

int main(void) {
    // Variável local com o mesmo nome da global
    int x = -1;
    int b;

    {
        extern int x;  // refere-se à variável global declarada fora do main
        b = x;         // b recebe o valor da variável global (10)
    }

    printf("\nValor de x (local em main) = %d", x);
    printf("\nValor de b (x global) = %d\n", b);

    return 0;
}
