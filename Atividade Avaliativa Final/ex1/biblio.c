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

void exibe(Lista L, int *c)
{   
    if ((*c) == 0)
        puts("\nA fila esta vazia!");
    else
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

void destroi(Lista *L, int *c)
{   
    if ((*c) == 0)
        puts("\nA fila esta vazia!");
    else
    while (*L != NULL)
    {
        Lista n = *L;
        *L = n->prox;
        free(n);
    }
    (*c)=0;
}

int tam(Lista L)
{
    if (L == NULL)
        return 0;
    return 1 + tam(L->prox);
}

int pert(Item x, Lista L)
{
    if (L == NULL)
        return 0;
    if (x == L->item)
        return 1;
    return pert(x, L->prox);
}

Lista clone(Lista L)
{
    if (L == NULL)
        return NULL;
    return no(L->item, clone(L->prox));
}

void exibe_inv(Lista L)
{
    if (L == NULL)
        return;
    exibe_inv(L->prox);
    printf(fmt, L->item);
}

void ins_ord(Item x, Lista *L)
{
    while (*L != NULL && (*L)->item < x)
        L = &(*L)->prox;
    *L = no(x, *L);
}