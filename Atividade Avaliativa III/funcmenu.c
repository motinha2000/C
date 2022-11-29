#include "biblio.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void insere(Lista *G, int *c)
{
    Item aux;
    if ((*c) == 0)
    {
        puts("\nInforme o nome do paciente: ");
        gets(aux.nome);
        fflush(stdin);
        puts("\nInforme a prioridade deste paciente: ");
        scanf("%d", &aux.prior);
        fflush(stdin);
        *G = no(aux, NULL);
        (*c)++;
    }
    else
    {
        puts("\nInforme o nome do paciente: ");
        gets(aux.nome);
        fflush(stdin);
        puts("Informe a prioridade deste paciente: ");
        scanf("%d", &aux.prior);
        fflush(stdin);
        ins_ord(aux, G);
    }
}

void chamar(Lista *G, int *c)
{
    if ((*c) == 0)
        puts("\nA fila esta vazia!");
    else
    {
        printf("\nCHAMANDO PACIENTE: %s!\n", (*G)->item.nome);
        Lista n = *G;
        *G = n->prox;
        free(n);
        (*c)--;
    }
}

void retira(Lista *G, int *c)
{
    puts("\nRetirado");
}

void mostrar(Lista G)//FUNÇÃO PARA DEPURAR O PROGRAMA E ENTENDER SEU FUNCIONAMENTO
{
    while (G != NULL)
    {
        printf("\nPACIENTE: %s\n", G->item.nome);
        printf("PRIORIDADE: %d\n", G->item.prior);
        G = G->prox;
    }
}