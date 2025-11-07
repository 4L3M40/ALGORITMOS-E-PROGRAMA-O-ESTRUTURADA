//exemplo de função recursiva em C que soma todos os números de um valor até 0
#include <stdio.h>

// Função recursiva que soma todos os números de 'valor' até 0
int somar(int valor) {
    if (valor != 0) {  // critério de parada
        return valor + somar(valor - 1);  // chamada recursiva
    } else {
        return 0;  // quando valor chega a 0, encerra a recursão
    }
}

int main(void) {
    int n, resultado;

    // Entrada de dados
    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &n);

    // Chamada da função recursiva
    resultado = somar(n);

    // Saída final
    printf("\nResultado da soma = %d\n", resultado);

    return 0;
}
