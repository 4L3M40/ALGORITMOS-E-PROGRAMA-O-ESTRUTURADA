// Desafio: Sistema de Gerenciamento de Alunos e Turmas
#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int matricula;
    float notas[2]; // 2 disciplinas
};

struct Turma {
    int numeroTurma;
    struct Aluno alunos[30]; // até 30 alunos
    int totalAlunos;
};

int main() {
    struct Aluno alunos[5];
    struct Turma turmas[10]; // até 10 turmas
    int op, a, t;
    float mediaTurma;

    // Cadastro direto de alunos
    strcpy(alunos[0].nome, "Joao");
    alunos[0].matricula = 1001;
    alunos[0].notas[0] = 8.5; alunos[0].notas[1] = 7.0;

    strcpy(alunos[1].nome, "Maria");
    alunos[1].matricula = 1002;
    alunos[1].notas[0] = 7.5; alunos[1].notas[1] = 8.0;

    strcpy(alunos[2].nome, "Pedro");
    alunos[2].matricula = 1003;
    alunos[2].notas[0] = 9.0; alunos[2].notas[1] = 9.5;

    strcpy(alunos[3].nome, "Ana");
    alunos[3].matricula = 1004;
    alunos[3].notas[0] = 7.0; alunos[3].notas[1] = 7.5;

    strcpy(alunos[4].nome, "Carlos");
    alunos[4].matricula = 1005;
    alunos[4].notas[0] = 8.0; alunos[4].notas[1] = 8.5;

    // Inicializa duas turmas
    turmas[0].totalAlunos = 0; turmas[0].numeroTurma = 5000;
    turmas[1].totalAlunos = 0; turmas[1].numeroTurma = 6000;

    do {
        printf("\n1 - Cadastrar aluno na turma\n");
        printf("2 - Lancar notas de aluno\n");
        printf("3 - Media da turma\n");
        printf("4 - Relatorio da turma\n");
        printf("5 - Encerrar\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op) {
        case 1:
            printf("Escolha o indice do aluno (0 a 4): ");
            scanf("%d", &a);
            printf("Escolha o indice da turma (0 ou 1): ");
            scanf("%d", &t);
            if (turmas[t].totalAlunos < 30) {
                turmas[t].alunos[turmas[t].totalAlunos] = alunos[a];
                turmas[t].totalAlunos++;
            } else {
                printf("Turma cheia.\n");
            }
            break;

        case 2:
            printf("Escolha o indice do aluno (0 a 4): ");
            scanf("%d", &a);
            for (int i = 0; i < 2; i++) {
                printf("Nota %d: ", i+1);
                scanf("%f", &alunos[a].notas[i]);
            }
            break;

        case 3:
            printf("Escolha o indice da turma (0 ou 1): ");
            scanf("%d", &t);
            mediaTurma = 0.0;
            for (int i = 0; i < turmas[t].totalAlunos; i++) {
                float somaNotas = turmas[t].alunos[i].notas[0] + turmas[t].alunos[i].notas[1];
                mediaTurma += somaNotas / 2;
            }
            if (turmas[t].totalAlunos > 0)
                printf("Media da turma: %.2f\n", mediaTurma / turmas[t].totalAlunos);
            else
                printf("Turma sem alunos.\n");
            break;

        case 4:
            printf("Escolha o indice da turma (0 ou 1): ");
            scanf("%d", &t);
            printf("\nTurma %d\n", turmas[t].numeroTurma);
            for (int i = 0; i < turmas[t].totalAlunos; i++) {
                printf("Aluno: %s\n", turmas[t].alunos[i].nome);
                printf("Matricula: %d\n", turmas[t].alunos[i].matricula);
                printf("Notas: %.2f %.2f\n", turmas[t].alunos[i].notas[0], turmas[t].alunos[i].notas[1]);
            }
            break;

        case 5:
            printf("Programa encerrado!\n");
            break;

        default:
            printf("Opcao invalida.\n");
        }
    } while (op != 5);

    return 0;
}
