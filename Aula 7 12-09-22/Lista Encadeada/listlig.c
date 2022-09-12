#include "listlig.h"
#include <stdlib.h>
#include <stdio.h>


Lista no(Item x, Lista p) // implementa o conteudo
{
    Lista n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

void exibe(Lista L)
{
    while (L != NULL)
    {
        printf("\n" fmt, L->item);
        L = L->prox;
    }
}

void f(void)
{
    Lista I = no(10, no(3, no(1, no(5, NULL))));
    exibe(I);
}

void anexa(Lista *A, Lista B)
{
    if (B == NULL)
        return;
    while (*A != NULL)
        A = &(*A)->prox;
    *A = B;
}