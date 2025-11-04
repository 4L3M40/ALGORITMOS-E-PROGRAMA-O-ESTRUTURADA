// Sequência de Collatz
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    i = 0;

    while (num > 1) { // enquanto num for maior que 1
        if (num % 2 == 0) { // regra para par
            num /= 2;          // equivalente a num = num / 2
        } else {
            num = 3 * num + 1; // regra para ímpar
        }

        printf("%d\n", num); // exibe o valor atual de num
        i++;
    }

    printf("\nTotal de passos: %d\n", i); // exibe o total de passos

    return 0;
}
