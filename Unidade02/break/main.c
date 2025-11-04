// Exemplo de uso do break em um loop para adivinhar um número secreto
#include <stdio.h>

int main() {
    int numero_secreto = 7;
    int tentativa;

    printf("Adivinhe o numero secreto!\n");

    while (1) { // Loop infinito até acertar
        printf("Insira um numero: ");
        scanf("%d", &tentativa);

        if (tentativa == numero_secreto) {
            printf("Parabens! Voce adivinhou o numero secreto.\n");
            break; // Sai do loop quando o número correto é adivinhado
        } else {
            printf("Tente novamente!\n");
        }
    }

    return 0;
}
