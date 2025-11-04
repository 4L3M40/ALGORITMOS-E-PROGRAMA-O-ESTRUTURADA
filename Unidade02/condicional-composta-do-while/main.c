// Calculo de metros quadrados com repetição
#include <stdio.h>

int main() {
    float metragem1 = 0, metragem2 = 0, resultado = 0;
    int resp;

    do {
        printf("=== Calculo de metros quadrados ===\n\n");

        printf("Digite a 1a metragem do terreno: ");
        scanf("%f", &metragem1);

        printf("Digite a 2a metragem do terreno: ");
        scanf("%f", &metragem2);

        resultado = metragem1 * metragem2;

        printf("\nO terreno tem = %.2f m²\n\n", resultado);

        printf("Digite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resp);

        printf("\n"); // quebra de linha para separar as execuções

    } while (resp == 1); // condição de repetição

    printf("Programa encerrado.\n");

    return 0;
}
