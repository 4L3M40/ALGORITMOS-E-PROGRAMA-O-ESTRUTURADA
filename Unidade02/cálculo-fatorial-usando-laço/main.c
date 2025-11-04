// Cálculo do fatorial de um número inteiro positivo usando um laço "for"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    unsigned long long fatorial = 1; // "unsigned long long" para suportar números grandes

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    // Verificação para números negativos
    if (n < 0) {
        printf("O fatorial nao esta definido para numeros negativos.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i; // fatorial = fatorial * i
        }
        printf("O fatorial de %d eh %llu\n", n, fatorial);
    }

    return 0;
}
