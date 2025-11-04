// Programa para calcular a média de notas de avaliações
#include <stdio.h>
#include <stdlib.h>

int main() {
    int avalia, cont = 0, soma = 0;
    char letra;
    float media;   

    do {
        printf("Digite uma nota para avaliacao: ");
        scanf("%d", &avalia);

        cont++;
        soma = soma + avalia;

        printf("Digite qualquer tecla para continuar ou 's' para encerrar: ");
        fflush(stdin); // limpa o buffer de entrada
    } while ((letra = getchar()) != 's');

    printf("\nQuantidade de avaliacoes = %d", cont);
    printf("\nSoma das notas = %d", soma);

    media = (float)soma / cont; // conversão para float
    printf("\nMedia do aluno = %.2f\n", media);

    system("PAUSE");
    return 0;
}
