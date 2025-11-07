//exemplo de passagem de struct por referência usando ponteiros em C
#include <stdio.h>
#include <string.h>  // necessário para usar strcpy

// Definição da estrutura Pessoa
struct Pessoa {
    char nome[50];
    int idade;
};

// Função que modifica a idade da pessoa
void modificarPessoa(struct Pessoa *p) {
    p->idade = 30;  // altera diretamente o valor original
}

int main(void) {
    struct Pessoa pessoa1;

    // Inicializa os valores
    strcpy(pessoa1.nome, "Joao");
    pessoa1.idade = 25;

    // Chama a função para modificar a idade
    modificarPessoa(&pessoa1);

    // Exibe os valores atualizados
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);

    return 0;
}
