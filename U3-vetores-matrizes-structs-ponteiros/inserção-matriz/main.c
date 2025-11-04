// Programa em C que permite a inserção de notas em uma matriz
#include <stdio.h>

int main() {
    float notas[3][2]; // Matriz para 3 alunos e 2 notas cada

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Exibindo as notas digitadas
    printf("\nNotas cadastradas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Aluno %d -> Nota 1: %.2f | Nota 2: %.2f\n", 
               i + 1, notas[i][0], notas[i][1]);
    }

    return 0;
}
