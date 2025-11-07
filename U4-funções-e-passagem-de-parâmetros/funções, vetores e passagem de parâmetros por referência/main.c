//exemplo de função que calcula o preço total de uma compra usando vetores e passagem de parâmetros por referência em C
#include <stdio.h>

// Função que calcula o preço total da compra
void calcularPrecoTotal(float precoUnitario[], int quantidade[], int numItens, float *precoTotal) {
    *precoTotal = 0;  // inicializa o acumulador

    for (int i = 0; i < numItens; i++) {
        *precoTotal += precoUnitario[i] * quantidade[i];
    }
}

int main(void) {
    int numItens;

    // Entrada do número de itens
    printf("Digite o numero de itens comprados: ");
    scanf("%d", &numItens);

    // Declaração dos vetores com tamanho definido pelo usuário
    float precoUnitario[numItens];
    int quantidade[numItens];
    float precoTotal;

    // Entrada dos preços unitários e quantidades
    for (int i = 0; i < numItens; i++) {
        printf("\nDigite o preco unitario do item %d: ", i + 1);
        scanf("%f", &precoUnitario[i]);

        printf("Digite a quantidade do item %d: ", i + 1);
        scanf("%d", &quantidade[i]);
    }

    // Chamada da função para calcular o preço total
    calcularPrecoTotal(precoUnitario, quantidade, numItens, &precoTotal);

    // Saída final
    printf("\nPreco total da compra: R$ %.2f\n", precoTotal);

    return 0;
}
