//exemplo de função que calcula o peso de uma coluna e escolhe o guindaste adequado
#include <stdio.h>

// Função para calcular o peso da coluna
float calcularPeso(void) {
    float b, h, c;  // base, altura e comprimento

    printf("\nDigite o valor da base: ");
    scanf("%f", &b);

    printf("\nDigite o valor da altura: ");
    scanf("%f", &h);

    printf("\nDigite o valor do comprimento: ");
    scanf("%f", &c);

    // Fórmula P = V * R, onde V = b * h * c e R = 25 (densidade fornecida)
    return b * h * c * 25;
}

int main(void) {
    float peso;

    // Chama a função e armazena o resultado
    peso = calcularPeso();

    // Estrutura condicional para escolher o guindaste
    if (peso <= 500) {
        printf("\nO guindaste de modelo G1 deve ser usado.\n");
    } else if (peso > 1500) {
        printf("\nO guindaste de modelo G3 deve ser usado.\n");
    } else {
        printf("\nO guindaste de modelo G2 deve ser usado.\n");
    }

    return 0;
}
