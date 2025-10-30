// Programa para calcular o salário líquido de um colaborador
#include <stdio.h>

int main() {
    float salario_bruto, inss = 0, ir = 0, salario_liquido;

    // Entrada de dados
    printf("Digite o salario bruto do colaborador: R$ ");
    scanf("%f", &salario_bruto);

    // Cálculo do INSS
    if (salario_bruto <= 1320.00) {
        inss = salario_bruto * 0.075;
    } else if (salario_bruto <= 2571.29) {
        inss = salario_bruto * 0.09;
    } else if (salario_bruto <= 3856.94) {
        inss = salario_bruto * 0.12;
    } else if (salario_bruto <= 7507.49) {
        inss = salario_bruto * 0.14;
    } else {
        inss = salario_bruto * 0.14; // limite simplificado
    }

    // Cálculo do IR
    if (salario_bruto <= 1903.98) {
        ir = 0;
    } else if (salario_bruto <= 2826.65) {
        ir = salario_bruto * 0.075;
    } else if (salario_bruto <= 3751.05) {
        ir = salario_bruto * 0.15;
    } else if (salario_bruto <= 4664.68) {
        ir = salario_bruto * 0.225;
    } else {
        ir = salario_bruto * 0.275;
    }

    // Salário líquido
    salario_liquido = salario_bruto - inss - ir;

    // Saída
    printf("\n--- Relatorio de Calculo ---\n");
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto INSS: R$ %.2f\n", inss);
    printf("Desconto IR:   R$ %.2f\n", ir);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);

    return 0;
}

/*Entrada:

Salário bruto do colaborador (float).

Processamento:

Calcular o desconto do INSS conforme a Tabela 1.

Calcular o desconto do Imposto de Renda (IR) conforme a Tabela 2.

Subtrair os descontos do salário bruto → obter o salário líquido.

Saída:

Mostrar o salário bruto, o valor descontado de INSS, o valor descontado de IR e o salário líquido.

Ferramenta usada:

Estruturas condicionais if...else if...else.*/