//exemplo de função que retorna um ponteiro para um vetor
#include <stdio.h>
#include <stdlib.h>

// Função que gera 10 números aleatórios e retorna um ponteiro para o vetor
int* gerarRandomico(void) {
    static int r[10];  // 'static' mantém o vetor válido após a função terminar
    int a;

    for (a = 0; a < 10; ++a) {
        r[a] = rand() % 100;  // números entre 0 e 99
        printf("r[%d] = %d\n", a, r[a]);
    }

    return r;  // retorna o endereço do vetor
}

int main(void) { 
    int *p;
    int i;

    p = gerarRandomico();  // recebe o ponteiro para o vetor

    for (i = 0; i < 10; i++) { // percorre o vetor retornado
        printf("p[%d] = %d\n", i, *(p + i)); // acessa os valores via ponteiro
    }

    return 0;
}
