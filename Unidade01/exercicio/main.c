// Cálculo do preço final de um televisor com imposto e desconto
#include <stdio.h>

int main() {
    // Variáveis
    float precoVenda = 1500.00, valorImposto, valorDesconto, precoFinal;

    // Constantes
    const float taxaImposto = 0.1;
    const float descontoPadrao = 0.05;

    // Processamento
    valorImposto = precoVenda * taxaImposto;
    valorDesconto = precoVenda * descontoPadrao;
    precoFinal = precoVenda + valorImposto - valorDesconto;

    // Saída
    printf("Preço de venda: R$ %.2f\n", precoVenda);
    printf("Imposto (10%%): R$ %.2f\n", valorImposto);
    printf("Desconto (5%%): R$ %.2f\n", valorDesconto);
    printf("Preço final do televisor: R$ %.2f\n", precoFinal);

    return 0;
}
