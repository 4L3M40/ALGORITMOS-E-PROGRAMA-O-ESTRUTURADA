//exemplo de variáveis globais com o mesmo nome em função diferente
#include <stdio.h>

// Variáveis globais
float t1, t2;

// Função que calcula a média das duas temperaturas
float calcularMedia(void) {
    return (t1 + t2) / 2;
}

int main(void) {
    printf("\nDigite as duas temperaturas: ");
    scanf("%f %f", &t1, &t2);

    printf("\nA temperatura media = %.2f\n", calcularMedia());

    return 0;
}
