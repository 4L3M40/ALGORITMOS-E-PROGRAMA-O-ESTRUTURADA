// Exemplo de passagem de vetor para uma função em C
#include <stdio.h>

// Função para inserir valores no vetor
void inserir(int a[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &a[i]);
    }
}

// Função para imprimir o dobro dos valores do vetor
void imprimir(int b[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("\n numeros[%d] = %d", i, 2 * b[i]);
    }
}

int main(void) {
    int numeros[3];  // vetor com 3 posições
    int tamanho = 3;

    printf("\nPreenchendo o vetor...\n");
    inserir(numeros, tamanho);

    printf("\nDobro dos valores informados:");
    imprimir(numeros, tamanho);

    printf("\n"); // quebra de linha final
    return 0;
}
