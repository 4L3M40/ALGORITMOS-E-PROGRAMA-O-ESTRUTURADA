//comparações de valores
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("\nn1 e n2 sao iguais? %d", n1 == n2);
    printf("\nn1 e maior que n2? %d", n1 > n2);
    printf("\nn1 e menor ou igual a n2? %d\n", n1 <= n2);

    return 0;
}
