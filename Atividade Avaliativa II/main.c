#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    Pilha P = pilha(5);

    empilha('A', P);

    int r = vaziap(P);

    if (r == 1)
        printf("pilha vazia!");
    else
        printf("pilha não vazia!");

    return 0;
}