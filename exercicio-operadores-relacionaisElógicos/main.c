// exercicio operadores relacionais e lógicos
#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados de vendas
    int tv_2020 = 800, tv_2021 = 950, tv_2022 = 725;
    int noteb_2020 = 650, noteb_2021 = 550, noteb_2022 = 700;
    int smart_2020 = 1500, smart_2021 = 1800, smart_2022 = 2100;

    // Variáveis para armazenar as médias
    float media_2020 = 0;
    float media_2021 = 0;
    float media_2022 = 0;

    // Cálculo das médias
    media_2020 = (tv_2020 + noteb_2020 + smart_2020) / 3.0;
    media_2021 = (tv_2021 + noteb_2021 + smart_2021) / 3.0;
    media_2022 = (tv_2022 + noteb_2022 + smart_2022) / 3.0;

    // Impressão das médias
    printf("Media de produtos vendidos em 2020: %.2f\n", media_2020);
    printf("Media de produtos vendidos em 2021: %.2f\n", media_2021);
    printf("Media de produtos vendidos em 2022: %.2f\n\n", media_2022);

    // Comparações lógicas
    printf("2020 obteve a maior media? %d\n", (media_2020 > media_2021) && (media_2020 > media_2022));
    printf("2021 obteve a maior media? %d\n", (media_2021 > media_2020) && (media_2021 > media_2022));
    printf("2022 obteve a maior media? %d\n", (media_2022 > media_2020) && (media_2022 > media_2021));

    return 0;
}

/*O que esse programa faz:
Armazena os dados de vendas em variáveis simples (tv_2020, noteb_2021, etc.).

Calcula a média de vendas de cada ano.

Imprime as médias com duas casas decimais.

Usa operadores relacionais e lógicos (>, &&) para verificar qual ano teve a maior média.

O resultado das comparações será 1 (verdadeiro) ou 0 (falso).*/