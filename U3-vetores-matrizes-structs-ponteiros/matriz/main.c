// Programa em C que cria dois vetores: um para idades e outro para alturas,
#include <stdio.h>

int main() {
    float notas[3][2];

    // Aluno 1
    notas[0][0] = 9.5;
    notas[0][1] = 10.0;

    // Aluno 2
    notas[1][0] = 4.5;
    notas[1][1] = 6.2;

    // Aluno 3
    notas[2][0] = 7.0;
    notas[2][1] = 8.5;

    // Impressão das notas
    for (int i = 0; i < 3; i++) { //
        printf("Aluno %d -> Nota 1: %.1f | Nota 2: %.1f\n", 
               i + 1, notas[i][0], notas[i][1]); //
    }

    return 0;
}

// Programa em C que cria dois vetores: um para idades e outro para alturas,