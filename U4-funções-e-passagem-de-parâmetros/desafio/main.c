//exemplo de sistema bancário simples usando funções e passagem de parâmetros por referência em C
#include <stdio.h>
#include <string.h>

// Estrutura que representa uma conta bancária
struct Conta {
    int numero;
    char titular[50];
    float saldo;
};

// Função para realizar depósito
void realizarDeposito(struct Conta *conta, float valor) {
    if (valor > 0) {
        conta->saldo += valor;
        printf("Deposito de R$%.2f realizado com sucesso!\n", valor);
    } else {
        printf("Valor invalido para depósito.\n");
    }
}

// Função para realizar saque
int realizarSaque(struct Conta *conta, float valor) {
    if (valor <= 0) {
        printf("Valor invalido para saque.\n");
        return 0;
    }
    if (conta->saldo >= valor) {
        conta->saldo -= valor;
        printf("Saque de R$%.2f realizado com sucesso!\n", valor);
        return 1; // saque bem-sucedido
    } else {
        printf("Saldo insuficiente para realizar o saque.\n");
        return 0; // saque mal-sucedido
    }
}

// Função para realizar transferência
int realizarTransferencia(struct Conta *origem, struct Conta *destino, float valor) {
    if (valor <= 0) {
        printf("Valor invalido para transferencia.\n");
        return 0;
    }
    if (realizarSaque(origem, valor)) {
        realizarDeposito(destino, valor);
        printf("Transferencia de R$%.2f realizada com sucesso!\n", valor);
        return 1; // transferência bem-sucedida
    } else {
        printf("Transferencia mal-sucedida.\n");
        return 0; // transferência mal-sucedida
    }
}

int main(void) {
    // Criação de duas contas
    struct Conta contas[2] = {
        {1, "Cliente1", 1000.0},
        {2, "Cliente2", 500.0}
    };

    int op, cc, cc2;
    float valor;

    do {
        printf("\n=== BOLSOFURADO BANK ===\n");
        printf("Saldo Conta 1 (%s): R$%.2f\n", contas[0].titular, contas[0].saldo);
        printf("Saldo Conta 2 (%s): R$%.2f\n\n", contas[1].titular, contas[1].saldo);

        printf("1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Transferencia\n");
        printf("4 - Sair\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("\nQual a conta para deposito (1 ou 2)? ");
                scanf("%d", &cc);
                printf("Qual o valor? ");
                scanf("%f", &valor);
                realizarDeposito(&contas[cc-1], valor);
                break;

            case 2:
                printf("\nQual a conta para saque (1 ou 2)? ");
                scanf("%d", &cc);
                printf("Qual o valor? ");
                scanf("%f", &valor);
                realizarSaque(&contas[cc-1], valor);
                break;

            case 3:
                printf("\nQual a conta de origem (1 ou 2)? ");
                scanf("%d", &cc);
                printf("Qual a conta de destino (1 ou 2)? ");
                scanf("%d", &cc2);
                printf("Qual o valor? ");
                scanf("%f", &valor);
                realizarTransferencia(&contas[cc-1], &contas[cc2-1], valor);
                break;

            case 4:
                printf("\nEncerrando o sistema...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while (op != 4);

    return 0;
}
