//exemplo de cálculo de massa em C
#include <stdio.h>

// Função que calcula a massa da reação
float calcularMassa(float a, float b) {
    const float mA = 321.43;  // massa molar do componente A
    const float mB = 150.72;  // massa molar do componente B

    // Exibe valores de referência da tabela
    printf("\nValores de referencia (mol A : mol B):");
    printf("\n 1,2 : 1,0 \t= %.2f", 1.2 * mA + 1.0 * mB);
    printf("\n 1,4 : 1,0 \t= %.2f", 1.4 * mA + 1.0 * mB);
    printf("\n 1,0 : 1,6 \t= %.2f", 1.0 * mA + 1.6 * mB);

    // Retorna a massa calculada com base nos valores fornecidos
    return (a * mA) + (b * mB);
}

int main(void) {
    float a, b, resultado;

    // Entrada de dados
    printf("\nDigite as quantidades em mol dos elementos A e B: ");
    scanf("%f %f", &a, &b);

    // Chama a função e armazena o resultado
    resultado = calcularMassa(a, b);

    // Saída final
    printf("\n\nMassa final do composto = %.2f g/mol\n", resultado);

    return 0;
}
