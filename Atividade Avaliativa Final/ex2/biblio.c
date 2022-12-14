#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

Pilha pilha(int m)
{
    Pilha P = malloc(sizeof(struct pilha));
    P->max = m;
    P->topo = -1;
    P->item = malloc(m * sizeof(Itemp));
    return P;
}

int vaziap(Pilha P)
{
    if (P->topo == -1)
        return 1;
    else
        return 0;
}

int cheiap(Pilha P)
{
    if (P->topo == P->max - 1)
        return -1;
    else
        return 0;
}

void empilha(Itemp x, Pilha *P)
{
    if (cheiap(*P))
        puts("\npilha cheia!");
    else
    {
        (*P)->topo++;
        (*P)->item[(*P)->topo] = x;
    }
}

Itemp desempilha(Pilha *P)
{   
    if (vaziap(*P))
        puts("\npilha vazia!");
    else
    {
        Itemp x = (*P)->item[(*P)->topo];
        (*P)->topo--;
        return x;
    }
}

Itemp topo(Pilha P)
{
    if (vaziap(P))
        puts("\npilha vazia!");
    else
        puts("\nCHEGOU AQUI!");

        return P->item[P->topo];
}

void destroip(Pilha *Q)
{
    free((*Q)->item);
    free(*Q);
    *Q = NULL;
}