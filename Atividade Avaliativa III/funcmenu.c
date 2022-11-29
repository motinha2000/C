#include "biblio.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void insere(Lista *G, int *c)
{
    Item aux;
    if ((*c)==0)
    {
        puts("\nInforme o nome do pacientes: ");
        gets(aux.nome);
        fflush(stdin);
        puts("\nInforme a prioridade deste pacientes: ");
        scanf("%d", &aux.prior);
        fflush(stdin);
        *G = no(aux, NULL);
        (*c)++;
    } else
    {
        puts("\nInforme o nome do paciente: ");
        gets(aux.nome);
        fflush(stdin);
        puts("\nInforme a prioridade deste paciente: ");
        scanf("%d", &aux.prior);
        fflush(stdin);
        ins_ord(aux,G);
    }
}

void chamar(Lista *G)
{
    puts("\nChamado!");
}

void retira(Lista *G)
{
    puts("\nRetirado");
}

void mostrar(Lista G)
{
    while (G != NULL)
    {
        printf("\nPACIENTE: %s\n", G->item.nome);
        printf("PRIORIDADE: %d\n", G->item.prior);
        G = G->prox;
    }
}