
#include <stdio.h>
#include <string.h>

int main() {
    char cpf1[20];   // CPF digitado (com pontos e traço)
    char cpf2[12];   // CPF sem formatação (11 dígitos + '\0')
    int i, n;

    while (1) {
        printf("\nDigite seu CPF no formato NNN.NNN.NNN-NN (ou 0 para sair): ");
        scanf("%19s", cpf1); // lê até 19 caracteres, evitando overflow

        // condição de saída
        if (strcmp(cpf1, "0") == 0) {
            printf("\nEncerrando o programa...\n");
            break;
        }

        n = 0; // índice para cpf2

        // percorre cada caractere do CPF digitado
        for (i = 0; cpf1[i] != '\0'; i++) {
            if (cpf1[i] == '.' || cpf1[i] == '-') {
                continue; // ignora pontos e traço
            }
            cpf2[n] = cpf1[i]; // copia apenas os dígitos
            n++;
        }

        cpf2[n] = '\0'; // finaliza a string

        printf("CPF sem formatacao: %s\n", cpf2);
    }

    return 0;
}
