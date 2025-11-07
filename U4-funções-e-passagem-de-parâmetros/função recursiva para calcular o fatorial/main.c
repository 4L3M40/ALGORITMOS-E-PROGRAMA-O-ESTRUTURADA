//exemplo de função recursiva para calcular o fatorial de um número em C
#include <stdio.h>

// Função recursiva para calcular o fatorial de um número
int fatorial(int valor) {
    if (valor > 0) {  // critério de parada
        return valor * fatorial(valor - 1);  // chamada recursiva
    } else {
        return 1;  // fatorial de 0 é 1
    }
}

int main(void) {
    int n, resultado;

    // Entrada de dados
    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &n);

    // Chamada da função recursiva
    resultado = fatorial(n);

    // Saída final
    printf("\nResultado do fatorial de %d = %d\n", n, resultado);

    return 0;
}
