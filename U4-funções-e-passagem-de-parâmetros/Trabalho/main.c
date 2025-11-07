// Programa para calcular salário líquido com funções
#include <stdio.h>  
 
// Função que calcula o salário bruto 
// Recebe o valor da hora e a quantidade de horas trabalhadas 
// Retorna o produto: valor_hora * horas 
float calcular_salario_bruto(float valor_hora, int horas) {  
    return valor_hora * horas;  
}  
 
// Função que calcula o desconto 
// Recebe o salário bruto e aplica 9% de desconto 
// Retorna o valor do desconto 
float calcular_desconto(float salario_bruto) {  
    return salario_bruto * 0.09;  
}  
 
// Função que calcula o salário líquido 
// Recebe o salário bruto e o desconto 
// Retorna o salário líquido (bruto - desconto) 
float calcular_salario_liquido(float salario_bruto, float desconto) {  
    return salario_bruto - desconto;  
}  
 
int main() {  
    float valor_hora, salario_bruto, desconto, salario_liquido;  
    int horas;  
 
    // Entrada de dados: valor da hora de trabalho 
    printf("Digite o valor da sua hora de trabalho: ");  
    scanf("%f", &valor_hora);  
 
    // Entrada de dados: quantidade de horas trabalhadas 
    printf("Digite a quantidade de horas trabalhadas no mes: ");  
    scanf("%d", &horas);  
 
    // Processamento: chamadas das funções 
    salario_bruto = calcular_salario_bruto(valor_hora, horas);  
    desconto = calcular_desconto(salario_bruto);  
    salario_liquido = calcular_salario_liquido(salario_bruto, desconto);  
 
    // Saída de resultados 
    printf("\nSalario Bruto: R$ %.2f", salario_bruto);  
    printf("\nDesconto (9%%): R$ %.2f", desconto);  
    printf("\nSalario Liquido: R$ %.2f\n", salario_liquido);  
 
    return 0;  
} 
 