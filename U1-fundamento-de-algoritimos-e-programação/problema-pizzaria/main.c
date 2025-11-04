//Programa para calcular o valor da conta de uma pizzaria com desconto e quanto cada pessoa deve pagar.
#include <stdio.h>

int main() {
    float conta, desconto, valor_com_desconto, valor_por_pessoa;
    int pessoas;

    // Entrada de dados
    printf("Digite o valor total da conta: R$ ");
    scanf("%f", &conta);

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &pessoas);

    printf("Digite o percentual de desconto (ex: 10 para 10%%): ");
    scanf("%f", &desconto);

    // Cálculo do valor com desconto
    valor_com_desconto = conta - (conta * (desconto / 100));

    // Cálculo do valor por pessoa
    valor_por_pessoa = valor_com_desconto / pessoas;

    // Saída dos resultados
    printf("\nValor total da conta com desconto: R$ %.2f\n", valor_com_desconto);
    printf("Cada pessoa deve pagar: R$ %.2f\n", valor_por_pessoa);

    return 0;
}

//É possível observar o uso dos operadores relacionais e lógicos aplicados na comparação dos valores de três variáveis.
/*O programa deve receber três dados:

Valor total da conta

Quantidade de pessoas na mesa

Percentual de desconto

Depois, ele deve calcular:

O valor da conta com desconto

Quanto cada pessoa deve pagar*/