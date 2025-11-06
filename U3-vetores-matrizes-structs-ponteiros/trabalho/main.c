// Trabalho: Leitura e Soma de Valores em um Vetor
#include <stdio.h> 
 
int main() { 
    int vetor[5];   // vetor de 5 inteiros 
    int soma = 0;   // variável para acumular a soma 
 
    // leitura dos valores 
    printf("Digite 5 valores inteiros:\n"); 
    for (int i = 0; i < 5; i++) { 
        printf("Valor %d: ", i+1); 
        scanf("%d", &vetor[i]); 
        soma += vetor[i]; // acumula a soma 
    } 
 
    // exibição dos valores 
    printf("\nValores inseridos:\n"); 
    for (int i = 0; i < 5; i++) { 
        printf("vetor[%d] = %d\n", i, vetor[i]); 
    } 
 
    // exibição da soma 
    printf("\nSoma total dos valores = %d\n", soma); 
 
    return 0; 
} 