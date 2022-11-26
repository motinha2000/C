#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

Lista no(Item x, Lista p)
{
    Lista n = malloc(sizeof(struct no));
    strcpy(n->item.nome, x.nome);
    n->item.prior = x.prior;
    n->prox = p;
    return n;
}

void ins_ord(Item x, Lista *L)
{
    while (*L != NULL && (*L)->item.prior < x.prior)
        L = &(*L)->prox;
    *L = no(x, *L);
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

