// Exemplo de uso de struct em C
#include <stdio.h>
#include <string.h>

// Definição da estrutura Aluno
struct Aluno {
    int numMat;       // Número de matrícula
    char nome[30];    // Nome do aluno
    char sexo;        // Sexo (M/F)
    int idade;        // Idade
};

int main() {
    struct Aluno aluno1;

    // Inserindo dados no aluno1
    aluno1.numMat = 1000;
    strcpy(aluno1.nome, "Joao");
    aluno1.sexo = 'M';
    aluno1.idade = 19;

    // Imprimindo os dados do aluno1
    printf("Numero de matricula: %d\n", aluno1.numMat);
    printf("Nome: %s\n", aluno1.nome);
    printf("Sexo: %c\n", aluno1.sexo);
    printf("Idade: %d\n", aluno1.idade);

    return 0;
}
