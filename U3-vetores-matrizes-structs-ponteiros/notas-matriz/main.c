// Cálculo de Médias de Alunos Usando Matrizes em C
#include <stdio.h>

#define NUM_ALUNOS 3
#define NUM_DISCIPLINAS 3

int main() {
    float notas[NUM_ALUNOS][NUM_DISCIPLINAS];
    float mediasAluno[NUM_ALUNOS];
    float mediaGeral, soma = 0;

    // Entrada das notas
    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < NUM_DISCIPLINAS; j++) {
            printf("  Nota da disciplina %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Calcula a media de cada aluno
    for (int i = 0; i < NUM_ALUNOS; i++) {
        float somaAluno = 0;
        for (int j = 0; j < NUM_DISCIPLINAS; j++) {
            somaAluno += notas[i][j];
        }
        mediasAluno[i] = somaAluno / NUM_DISCIPLINAS;
    }

    // Calcula a media geral da turma
    for (int i = 0; i < NUM_ALUNOS; i++) {
        soma += mediasAluno[i];
    }
    mediaGeral = soma / NUM_ALUNOS;

    // Imprime as medias de cada aluno
    printf("\nMedias dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d -> Media: %.2f\n", i + 1, mediasAluno[i]);
    }

    // Imprime a media geral
    printf("\nMedia geral da turma: %.2f\n", mediaGeral);

    return 0;
}
