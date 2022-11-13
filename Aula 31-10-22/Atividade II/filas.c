#include "filas.h"
#include <stdio.h>
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
        puts("\nfila cheia!");
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
        puts("\nfila vazia!");
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

void menu()
{
    int op = -1;
    while (op != 0)
    {   
        printf("\n1 - Para pegar uma senha.");
        printf("\n2 - Para chamar uma senha.");
        printf("\n0 - Para encerrar o expediente!");
        printf("\nInforme uma Opcao: ");
        scanf("%d",&op);
        switch (op)
        {
            case 1: printf("\nTudo OK!\n");break;
            case 2: printf("\nTudo OK!\n");break;
            case 0: break;
            default: printf("\nOpcao nao localizada.");break;
        }
    }

}