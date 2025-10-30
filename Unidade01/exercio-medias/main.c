// exercio-medias
#include <stdio.h>

int main() {
    // Quantidade de produtos vendidos por ano
    int tv[3] = {800, 950, 725};
    int notebook[3] = {650, 550, 700};
    int smartphone[3] = {1500, 1800, 2100};

    // Cálculo das médias por ano
    float media2020 = (tv[0] + notebook[0] + smartphone[0]) / 3.0;
    float media2021 = (tv[1] + notebook[1] + smartphone[1]) / 3.0;
    float media2022 = (tv[2] + notebook[2] + smartphone[2]) / 3.0;

    // Exibição das médias
    printf("Media de produtos vendidos em 2020: %.2f\n", media2020);
    printf("Media de produtos vendidos em 2021: %.2f\n", media2021);
    printf("Media de produtos vendidos em 2022: %.2f\n\n", media2022);

    // Identificação do ano com maior média
    if (media2020 > media2021 && media2020 > media2022)
        printf("O ano com maior media de vendas foi 2020.\n");
    else if (media2021 > media2020 && media2021 > media2022)
        printf("O ano com maior media de vendas foi 2021.\n");
    else if (media2022 > media2020 && media2022 > media2021)
        printf("O ano com maior media de vendas foi 2022.\n");
    else
        printf("Ha empate entre os anos em relação a media de vendas.\n");

    // Abordagem alternativa: total de vendas por ano
    int total2020 = tv[0] + notebook[0] + smartphone[0];
    int total2021 = tv[1] + notebook[1] + smartphone[1];
    int total2022 = tv[2] + notebook[2] + smartphone[2];

    printf("\nTotal de produtos vendidos em 2020: %d\n", total2020);
    printf("Total de produtos vendidos em 2021: %d\n", total2021);
    printf("Total de produtos vendidos em 2022: %d\n", total2022);

    return 0;
}
