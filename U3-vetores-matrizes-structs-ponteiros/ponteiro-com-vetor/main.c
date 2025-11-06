// Exemplo de uso de ponteiro com vetor em C
#include <stdio.h>

int main() {
    char *ptr;
    int i;
    char vet[5] = {'a', 'b', 'c', 'd', 'e'};

    // Ponteiro aponta para o primeiro elemento do vetor
    ptr = vet;

    for (i = 0; i < 5; i++) {
        // Conteudo do vetor acessado diretamente
        printf("\nVet[%d] = %c", i, vet[i]);

        // Conteudo do vetor acessado pelo ponteiro
        printf("\nptr = %c\n", *ptr);

        // Avanca o ponteiro para o proximo elemento
        ptr++;
    }

    return 0;
}
