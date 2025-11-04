//Leitura e escrita de um numero inteiro

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

     int num;
     printf("Digite um numero: ");
     scanf("%d", &num);
     printf("Voce digitou: %d ", num);
     system("pause");

     return 0;
}
