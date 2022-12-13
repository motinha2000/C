#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>

Lista no(Item x, Lista p)
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
        printf(fmt, L->item);
        L = L->prox;
    }
}

void anexa(Lista *A, Lista B)
{
    if (B == NULL)
        return;
    while (*A != NULL)
        A = &(*A)->prox;
    *A = B;
}

void f(void)
{
    Lista I = no(3, no(1, no(5, NULL)));
    printf("\nTAM: %d\n",tam(I));
    exibe(I);
}

void destroi(Lista *L)
{
    while (*L != NULL)
    {
        Lista n = *L;
        *L = n->prox;
        free(n);
    }
}

int tam(Lista L)
{
    if (L == NULL)
        return 0;
    return 1 + tam(L->prox);
}