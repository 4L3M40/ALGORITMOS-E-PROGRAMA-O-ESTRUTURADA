// Programa para somar numeros inteiros ate o usuario digitar 0
#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    // Solicita ao usuário o primeiro número inteiro
    printf("Digite um numero inteiro (0 para sair): ");
    scanf("%d", &numero);  // Lê o número digitado e armazena em 'numero'

    // Estrutura de repetição WHILE: executa enquanto o número for diferente de zero
    while (numero != 0) {
        soma += numero;  // Adiciona o valor digitado à variável 'soma'

        // Solicita um novo número e repete o processo até que o usuário digite 0
        printf("Digite outro numero (0 para sair): ");
        scanf("%d", &numero);
    }

    // Quando o usuário digita 0, o loop encerra e o programa exibe o resultado final
    printf("A soma total dos numeros inseridos e: %d\n", soma);

    return 0;
}
