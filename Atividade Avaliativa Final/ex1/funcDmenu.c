#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>

void insere(Lista *G, int *c)
{
    Item aux;
    if ((*c) == 0)
    {
        puts("\nInforme um numero inteiro: ");
        scanf("%d",&aux);
        fflush(stdin);
        *G = no(aux,NULL);
        (*c)++;
    }
    else
    {
        puts("\nInforme um numero inteiro: ");
        scanf("%d",&aux);
        fflush(stdin);
        ins_ord(aux, G);
        (*c)++;
    }
}

void procura(Lista *G, int *c)
{   
    Item aux;
    if ((*c) == 0)
        puts("\nA fila esta vazia!");
    else
    {
        puts("\nInforme um valor a ser procurado: ");
        scanf("%d", &aux);
        int a = pert(aux,*G);
        if(a==1)
            puts("\nValor encontrado na lista!");
        else puts("\nValor nao encontrado na lista");
    }
}
