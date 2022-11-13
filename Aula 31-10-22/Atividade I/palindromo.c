#include "palindromo.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

Fila fila(int m)
{
    Fila F = malloc(sizeof(struct fila));
    F->max = m;
    F->total = 0;
    F->inicio = 0;
    F->final = 0;
    F->item = malloc(m * sizeof(Itemf));
    return F;
}

int vaziaf(Fila F)
{
    return (F->total == 0);
}

int cheiaf(Fila F)
{
    return (F->total == F->max);
}

void enfileira(Itemf x, Fila F)
{
    if (cheiaf(F))
    {
        puts("fila cheia!");
        abort();
    }
    F->item[F->final] = x;
    avanca(F->final);
    F->total++;
}

Itemf desenfileira(Fila F)
{
    if (vaziaf(F))
    {
        puts("fila vazia!");
        abort();
    }
    Itemf x = F->item[F->inicio];
    avanca(F->inicio);
    F->total--;
    return x;
}

void destroif(Fila *G)
{
    free((*G)->item);
    free(*G);
    *G = NULL;
}

Pilha pilha(int m)
{
    Pilha P = malloc(sizeof(struct pilha));
    P->max = m;
    P->topo = -1;
    P->item = malloc(m * sizeof(Itemp));
    return P;
}

int vaziap(Pilha *P)
{
    if ((*P)->topo == -1)
        return 1;
    else
        return 0;
}

int cheiap(Pilha *P)
{
    if ((*P)->topo == (*P)->max - 1)
        return 1;
    else
        return 0;
}

void empilha(Itemp x, Pilha *P)
{
    if (cheiap(P))
    {
        puts("pilha cheia!");
        abort();
    }
    (*P)->topo++;
    (*P)->item[(*P)->topo] = x;
}

Itemp desempilha(Pilha *P)
{
    if (vaziap(P))
    {
        puts("pilha vazia!");
        abort();
    }
    Itemp x = (*P)->item[(*P)->topo];
    (*P)->topo--;
    return x;
}

void destroip(Pilha *Q)
{
    free((*Q)->item);
    free(*Q);
    *Q = NULL;
}
