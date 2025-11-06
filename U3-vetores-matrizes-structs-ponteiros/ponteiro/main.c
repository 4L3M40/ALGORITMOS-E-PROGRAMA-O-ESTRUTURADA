// Exemplo de uso de ponteiros com struct em C
#include <stdio.h>

// Definicao da estrutura aluno
struct aluno {
    int mat;       // matricula
    float nota;    // nota
};

int main() {
    struct aluno joao;
    struct aluno *ptr; // ponteiro para struct

    // Inicializacao da struct
    joao.mat = 1000;
    joao.nota = 8.5;

    // Inicializacao do ponteiro
    ptr = &joao;

    // Impressao dos atributos via ponteiro
    printf("%d\n", ptr->mat);
    printf("%f\n", ptr->nota);

    return 0;
}
