// Exemplo de uso da estrutura switch-case em C
#include <stdio.h>

int main() {
    char opcao;
    float valor, total;

    // Entrada do valor da compra
    printf("\nDigite o valor da compra: ");
    scanf("%f", &valor);

    // Menu de opcoes
    printf("\nDigite a letra que representa o desconto a ser aplicado:\n");
    printf("\ta - 10%% de desconto\n"); 
    printf("\tb - 15%% de desconto\n");

    printf("\nDigite sua opcao: ");
    scanf(" %c", &opcao); // o espaco antes de %c evita problemas com ENTER

    // Estrutura de decisao
    switch (opcao) { 
        case 'a': 
            total = valor - (valor * 0.10);
            printf("\nValor final da compra: R$ %.2f\n", total);
            break;

        case 'b': 
            total = valor - (valor * 0.15); // corrigido para 15% 
            printf("\nValor final da compra: R$ %.2f\n", total); 
            break;

        default:
            printf("\nOpcao invalida\n");
    }

    return 0;
}
