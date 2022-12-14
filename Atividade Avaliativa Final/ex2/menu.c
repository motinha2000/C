#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>

void menu(Pilha *G)
{
    int op = -1;
    while (op != 0)
    {
        puts("\n1 - Empilhar.");
        puts("2 - Desempilhar.");
        puts("3 - Ver item no topo.");
        puts("0 - Destruir a pilha e Encerrrar o programa.");
        printf("Informe uma opcao: ");
        scanf("%d", &op);
        fflush(stdin);
        switch (op)
        {
        case 1:
            adicionar(G);
            break;
        case 2:
            remover(G);
            break;
        case 3:
            ver_topo(G);
            break;
        case 0:
            destroip(G);
            puts("\nSaindo...\n");
            ;
            break;
        default:
            puts("\nOpcao nao localizada!!!");
        }
    }
}