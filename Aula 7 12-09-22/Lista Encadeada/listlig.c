#include "listlig.h"
#include <stdlib.h>
#include <stdio.h>

void f(void)
{
    Lista I = no(14, no(10, no(3, no(1, no(5, NULL)))));
    exibe(I);
}

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

void exibe_inv(Lista L)
{
    if (L == NULL)
        return;
    exibe_inv(L->prox);
    printf(fmt, L->item);
}

void anexa(Lista *A, Lista B)
{
    if (B == NULL)
        return;
    while (*A != NULL)
        A = &(*A)->prox;
    *A = B;
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

int ocorrencias(Item x, Lista L)
{
    int s = 0;
    if (L == NULL)
        return s;
    if (x == L->item)
    {
        return s = 1 + ocorrencias(x, L->prox);
    }
    ocorrencias(x, L->prox);
}

void ins(Item x, Lista *L)
{
    while (*L != NULL && (*L)->item < x)
        L = &(*L)->prox;
    *L = no(x, *L);
}

void rem(Item x, Lista *L)
{
    while (*L != NULL && (*L)->item < x) // PERCORRER A LISTA
        L = &(*L)->prox;
    if (*L == NULL || (*L)->item > x) // NÃO PERTECE A LISTA
        return;
    Lista n = *L; // GUARDA O VALOR ENCONTRADO
    *L = n->prox;
    free(n);
}

int em(Item x, Lista L)
{
    while (L != NULL && L->item < x)
        L = L->prox;
    return (L != NULL && L->item == x);
}

void rem_rep(Item x, Lista *L)
{
    while (L != NULL && (*L)->item < x) // PERCORRER A LISTA
        L = &(*L)->prox;
    if (*L == NULL || (*L)->item > x)
        return;
    int r = ocorrencias(x, (*L));

    while(r>1)
    {
        rem(x, L);
        r--;
    }
}