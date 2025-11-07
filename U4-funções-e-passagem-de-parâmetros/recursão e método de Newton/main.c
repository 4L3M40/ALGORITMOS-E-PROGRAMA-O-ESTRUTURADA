//exemplo de cálculo da raiz quadrada usando recursão e o método de Newton em C
#include <stdio.h>
#include <math.h>

// Função recursiva para calcular a raiz quadrada usando o método de Newton
float calcularRaiz(float n, float raizAnt) {
    // Fórmula de Newton: raiz = (raizAnt^2 + n) / (2 * raizAnt)
    float raiz = (pow(raizAnt, 2) + n) / (2 * raizAnt);

    // Critério de parada: diferença menor que 0.001
    if (fabs(raiz - raizAnt) < 0.001) {
        return raiz;
    }

    // Chamada recursiva com o novo valor
    return calcularRaiz(n, raiz);
}

int main(void) {
    float numero, raiz;

    // Entrada de dados
    printf("\nDigite um numero para calcular a raiz quadrada: ");
    scanf("%f", &numero);

    // Chute inicial: metade do número informado
    raiz = calcularRaiz(numero, numero / 2);

    // Saída final
    printf("\nRaiz quadrada aproximada: %.3f\n", raiz);

    return 0;
}
