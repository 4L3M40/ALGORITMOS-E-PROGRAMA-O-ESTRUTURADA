// Exemplo de gerenciamento de uma biblioteca usando struct e vetor em C
#include <stdio.h>
#include <string.h>

#define NUM_LIVROS 3

// Definicao da estrutura Livro
typedef struct {
    char titulo[100];
    char autor[50];
    char ISBN[14];
    int anoPublicacao;
    int estoque;
} Livro;

int main() {
    // Inicializacao do vetor de livros
    Livro livros[NUM_LIVROS] = {
        {"Memorias de um Futuro Esquecido", "Martelo de Assis", "1231231231239", 1899, 10},
        {"O Silencio dos Inocentes Gritando", "Franz Kafta", "4564564564569", 1915, 5},
        {"A Menina que Roubava Livros e os Devolvia com Juros", "Dan Brownie", "7897897897899", 1949, 8}
    };

    // Realizar uma busca por autor
    char autorProcurado[50];
    fflush(stdin); // limpa o buffer de leitura (nao e portavel, mas funciona em alguns compiladores)

    printf("Digite o nome do autor para procurar livros: ");
    fgets(autorProcurado, 50, stdin);
    autorProcurado[strcspn(autorProcurado, "\n")] = 0; // remove o \n ao final da string

    printf("Livros por %s:\n", autorProcurado);
    for (int i = 0; i < NUM_LIVROS; i++) {
        if (strcmp(livros[i].autor, autorProcurado) == 0) {
            printf("Titulo: %s\n", livros[i].titulo);
            printf("ISBN: %s\n", livros[i].ISBN);
            printf("Ano de Publicacao: %d\n", livros[i].anoPublicacao);
            printf("Estoque Disponivel: %d\n", livros[i].estoque);
            printf("\n");
        }
    }

    // Verificar disponibilidade de um livro pelo ISBN
    char ISBNProcurado[14];
    fflush(stdin);

    printf("Digite o ISBN do livro para verificar a disponibilidade: ");
    fgets(ISBNProcurado, 14, stdin);
    ISBNProcurado[strcspn(ISBNProcurado, "\n")] = 0; // remove o \n ao final da string

    for (int i = 0; i < NUM_LIVROS; i++) {
        if (strcmp(livros[i].ISBN, ISBNProcurado) == 0) {
            printf("O livro %s esta disponivel em estoque: %d\n", livros[i].titulo, livros[i].estoque);
            break;
        }
    }

    return 0;
}

/*struct para organizar dados complexos (cada livro com título, autor, ISBN, ano e estoque).

Vetores de structs para armazenar vários registros.

Manipulação de strings (fgets, strcmp, strcspn) para entrada e comparação de dados.*/