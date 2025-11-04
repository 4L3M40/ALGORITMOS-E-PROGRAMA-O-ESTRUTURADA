// Programa em C que cria dois vetores: um para idades e outro para alturas,
#include <stdio.h>

int main() {
    int idade[3];
    float altura[3] = {1, 1.5, 1.7};

    // atribuindo valores ao vetor idade
    idade[0] = 10;
    idade[1] = 18;
    idade[2] = 32;

    // imprimindo os dois vetores
    printf("\nPessoa 1 -> Idade: %d anos | Altura: %.2f m", idade[0], altura[0]);
    printf("\nPessoa 2 -> Idade: %d anos | Altura: %.2f m", idade[1], altura[1]);
    printf("\nPessoa 3 -> Idade: %d anos | Altura: %.2f m", idade[2], altura[2]);

    return 0;
}
