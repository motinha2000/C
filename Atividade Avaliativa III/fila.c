#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

Lista no(Item x, Lista p)
{
    Lista n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

void destroi(Lista *L)
{
    while(*L != NULL)
    {
        Lista n = *L;
        *L = n->prox;
        free(n);
    }
}