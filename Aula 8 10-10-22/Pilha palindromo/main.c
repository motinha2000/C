#include <stdio.h>
#include "biblio.h"

int main(void)
{
    Pilha P;
    P = pilha(10);

    int num, num2, u, d, c;
    do
    {
        printf("Forneca um numero de 3 algarismos para o teste de palindromo: ");
        scanf("%d", &num);
    } while (num < 100 || num > 999);
    c = num / 100;
    d = (num / 10) % 10;
    u = num % 10;
    empilha(c, &P);
    empilha(d, &P);
    empilha(u, &P);
    num2 = desempilha(&P) * 100 + desempilha(&P) * 10 + desempilha(&P);
    destroip(&P);

    if (num2 == num)
        printf("\nEh palindromo!");
    else
        printf("\nNao eh palindromo!");

    return 0;
}
