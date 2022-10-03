#include <stdio.h>
#include "pilha.h"

int main(void)
{
    int num;
    Pilha P;
    P = pilha(10);
    printf("Forneca um numero para ser convertido para binario: ");
    scanf("%d", &num);
    do
    {
        empilha(num % 2, &P);
        num /= 2;
    } while (num != 0);
    printf("Numero binario: ");
    while (!vaziap(&P))
    {
        printf("%d", desempilha(&P));
    }
    destroip(&P);
    if (!P)
        printf("\nPilha vazia!");
    else
        printf("\nPilha não vazia!");

    return 0;
}
