// Programa em C para contar alunos matriculados em disciplinas com uso de break e continue
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int total_disciplinas;
    int limite_alunos = 100;
    int total_alunos = 0;
    int disciplinas_contadas = 0;

    printf("Sistema de contagem de alunos matriculados!\n");
    printf("Insira o numero de disciplinas disponiveis: ");
    scanf("%d", &total_disciplinas);

    for (int i = 1; i <= total_disciplinas; i++) {
        int alunos_matriculados;

        printf("Insira o numero de alunos matriculados na disciplina %d: ", i);
        scanf("%d", &alunos_matriculados);

        // Verifica se o numero de alunos matriculados e valido
        if (alunos_matriculados < 0) {
            printf("Numero de alunos invalido. Tente novamente.\n");
            i--;        // Volta para a mesma disciplina
            continue;   // Pula para a proxima iteracao do loop
        }

        total_alunos += alunos_matriculados;
        disciplinas_contadas++;

        // Verifica se o limite de alunos foi atingido
        if (total_alunos >= limite_alunos) {
            printf("Limite de alunos atingido. Encerrando contagem de disciplinas.\n");
            break; // Encerra o loop de contagem de disciplinas
        }
    }

    printf("Total de disciplinas contadas: %d\n", disciplinas_contadas);
    printf("Total de alunos matriculados: %d\n", total_alunos);

    return 0;
}
