// Exemplo de uso do goto em C
#include <stdio.h>

int main() {
    int numero;

    printf("Insira um numero positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        goto erro; // Vai para o rótulo 'erro' se o número não for positivo
    }

    printf("Numero valido: %d\n", numero);
    return 0;

erro: // Rótulo para manipular erro
    printf("Erro: Numero invalido.\n");
    return 0;
}
