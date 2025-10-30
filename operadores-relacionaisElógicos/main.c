//É possível observar o uso dos operadores relacionais e lógicos aplicados na comparação dos valores de três variáveis. 
//Na linha 4, a condição estabelecida será verdadeira se o valor de "a" for igual ao valor de "b" E o valor de "a" 
//for igual a "c"; como a primeira condição não é verdadeira, o resultado da expressão será 0. Na linha 5, 
//a condição será verdadeira se uma das condições for satisfeita, portanto o resultado será 1. Por fim, na linha 6, 
//o resultado é invertido utilizando o operador de negação.

#include <stdio.h>

int main() {

    int a=5, b=10, c=5;

    printf("\n (a==b)&&(a==c) = %d", ((a==b)&&(a==c)));
    printf("\n (a==b)||(a==c) = %d", ((a==b)||(a==c)));
    printf("\n !(a==b)||(a==c) = %d", !((a==b)||(a==c)));

    return 0;

}