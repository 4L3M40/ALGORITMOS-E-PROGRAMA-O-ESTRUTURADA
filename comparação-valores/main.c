//comparações de valores
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("\nn1 e n2 são iguais? %d", n1 == n2);
    printf("\nn1 é maior que n2? %d", n1 > n2);
    printf("\nn1 é menor ou igual a n2? %d\n", n1 <= n2);

    return 0;
}
