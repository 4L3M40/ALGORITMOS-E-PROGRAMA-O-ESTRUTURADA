// Programa para verificar se uma pessoa é maior de idade
#include <stdio.h> 

int main() {
    int idade; // Variável para armazenar a idade do usuário

    printf("Digite sua idade: ");
    scanf("%d", &idade); // Lê a idade do usuário

    if (idade >= 18) {      // Condição para verificar se é maior de idade
        printf("Voce ja pode tirar sua carteira de habilitacao, pois e maior de idade.\n"); // Verifica se a idade é maior ou igual a 18
    } else {
        printf("Voce ainda nao pode tirar a carteira de habilitacao.\n"); // Caso contrário, informa que não pode
    }

    return 0; 
}
