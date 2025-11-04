// Programa para verificar se um número é positivo, negativo ou zero
#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("\nO numero e positivo\n");
    } else if (num < 0) {
        printf("\nO numero e negativo\n");
    } else {
        printf("\nO numero e zero\n");
    }

    return 0;
}
