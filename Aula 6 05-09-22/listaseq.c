#include <stdio.h>
#include <stdlib.h>
#include "listaseq.h"

struct lista
{
    int qtd;
    struct aluno dados[MAX];
};

// CRIANDO UMA LISTA

Lista *cria_lista()
{
    Lista *li;
    li = malloc(CTT*sizeof(struct lista));//d = malloc (sizeof (data)); (Lista *)removido!
    if (li != NULL)
        li->qtd = 0;
    return li;
}

void libera_lista(Lista *li)
{
    free(li);
}

int tamanho_lista(Lista *li)
{
    if (li == NULL)
        return -1;
    else
        return li->qtd;
}

int lista_cheia(Lista *li)
{
    if (li == NULL)
        return -1;
    return (li->qtd == MAX);
}

int lista_vazia(Lista *li)
{
    if (li == NULL)
        return -1;
    return (li->qtd == 0);
}

int insere_lista_inicio(Lista *li, struct aluno al)
{
    if (li == NULL)
        return 0;
    if (li->qtd == MAX)
        return 0;
    int i;
    for (li->qtd - 1; i >= 0; i--)
        li->dados[i + 1] = li->dados[i];
    li->dados[0] = al;
    li->qtd++;
    return 1;
}

int insere_lista_final(Lista *li, struct aluno al)
{
    if (li == NULL)
        return 0;
    if (li->qtd == MAX) // lista cheia
        return 0;
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
}

int busca_lista_pos(Lista *li, int pos, struct aluno *al)
{
    if (li == NULL || pos <= 0 || pos > li->qtd)
        return 0;
    *al = li->dados[pos - 1];
    return 1;
}