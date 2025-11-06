// Exemplo de aritmética de ponteiros em C
#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int *ponteiro = vetor;

    for (int i = 0; i < 5; i++) {
        *ponteiro += 10;   // soma 10 ao valor apontado
        ponteiro++;        // avanca para o proximo elemento
    }

    printf("Elementos do vetor apos adicionar 10:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
