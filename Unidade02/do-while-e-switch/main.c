#include <stdio.h>
#include <stdlib.h>

int main() {
    float soma = 0, valor;  // 'soma' representa o saldo
    int opcao;

    do {
        // Menu de opcoes
        printf("\n=== Menu de Operacoes Bancarias ===\n");
        printf("1. Deposito\n");
        printf("2. Saque\n");
        printf("3. Saldo\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: // Deposito
                printf("\nValor do deposito: ");
                scanf("%f", &valor);
                soma = soma + valor;
                printf("Deposito realizado com sucesso!\n");
                break;

            case 2: // Saque
                printf("\nValor do saque: ");
                scanf("%f", &valor);
                soma = soma - valor;
                printf("Saque realizado com sucesso!\n");
                break;

            case 3: // Saldo
                printf("\nSaldo atual = R$ %.2f\n", soma);
                break;

            case 4: // Sair
                printf("\nEncerrando o programa...\n");
                break;

            default: // Opcao invalida
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while(opcao != 4); // repete ate o usuario escolher sair

    printf("\nFim das operacoes.\n\n");
    return 0;
}
