// Criação de variáveis e leitura de dados do usuário
#include <stdio.h>

int main(){

    char caractere;
    float valor1, valor2;

    printf("\n Digite um caractere qualquer:");
    scanf("%c", &caractere);
    printf("\n Digite o primeiro valor:");
    scanf("%f", &valor1);
    printf("\n Digite o segundo valor:");
    scanf("%f", &valor2);
    printf("Variavel 1 = %c\n", caractere);
    printf("Variavel 2 = %.2f\n", valor1);
    printf("Variavel 3 = %.2f\n", valor2);

    return 0;
}