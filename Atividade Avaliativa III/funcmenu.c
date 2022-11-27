#include "biblio.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void insere(Lista *G)
{
    Item aux;
    puts("\nInforme o nome do paciente: ");
    fgets(aux.nome, 10, stdin);
    fflush(stdin);
    puts("\nInforme a prioridade deste paciente: ");
    scanf("%d", &aux.prior);
    fflush(stdin);
    ins_ord(aux, G);
}

void chamar(Lista *G)
{
    puts("\nChamado!");
}

void retira(Lista *G)
{
    puts("\nRetirado");
}

void mostrar(Lista *G)
{
    while (*G != NULL)
    {
        if ((*G)->item.prior != -1)
        {
            printf("\nPACIENTE: %s", (*G)->item.nome);
            printf("PRIORIDADE: %d\n", (*G)->item.prior);
            *G = (*G)->prox;
        }
        *G = (*G)->prox;
    }
}