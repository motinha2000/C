#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>

void adicionar(Pilha *P)
{
    Itemp aux;
    printf("\nInforme um numero: ");
    scanf("%f", &aux);
    fflush(stdin);
    empilha(aux, P);
}

void remover(Pilha *P)
{
    if (vaziap(*P) == 1)
    {
        puts("\npilha vazia!");
        return;
    }
    else
    {
        printf("\nNumero desempilhado: %.2f!\n",desempilha(P));
    }
}

void ver_topo(Pilha *P)
{
    if (vaziap(*P) == 1)
    {
        puts("\npilha vazia!");
        return;
    }
    else
        printf("\nValor no topo: %.2f!\n", topo(*P));
}
