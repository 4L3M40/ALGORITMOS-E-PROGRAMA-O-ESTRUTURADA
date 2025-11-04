// Tabuada usando while
#include <stdio.h>

int main() {
    int multiplicador = 0, resultado, num; // Declara variaveis para o multiplicador, resultado e numero

    printf("Tabuada de qual numero: ");    // Solicita ao usuario o numero para a tabuada
    scanf("%d", &num); // Le o numero fornecido pelo usuario

    while (multiplicador <= 10) { // Loop para calcular a tabuada de 0 a 10
        resultado = num * multiplicador; // Calcula o resultado da multiplicacao
        printf("%d x %d = %d\n", num, multiplicador, resultado); // Exibe o resultado formatado
        multiplicador = multiplicador + 1; // Incrementa o multiplicador
    }

    return 0;
}
