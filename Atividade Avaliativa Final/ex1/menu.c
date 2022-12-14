#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>

void menu(Lista *G, int *c)
{
    int op = 999;
    while (op != 0)
    {
        puts("\n1 - Adicionar numero a lista.");
        puts("2 - Mostrar Tamanho da Lista.");
        puts("3 - Exibe a lista.");
        puts("4 - Procura valor.");
        puts("5 - Destroi a lista.");
        puts("0 - Sair do programa.");
        printf("Informe uma opcao: ");
        scanf("%d", &op);
        fflush(stdin);
        switch (op)
        {
        case 1:
            insere(G, c);
            break;
        case 2:
            if ((*c) == 0)
                puts("\nA fila esta vazia!");
            else
                printf("\nTamanho da Lista: %d.\n", tam(*G));
            break;
        case 3:
            exibe(*G,c);
            break;
        case 4:
            procura(G,c);
            break;
        case 5:
            destroi(G,c);
            break;
        case 0:
            puts("Saindo...");
            break;
        default:
            puts("\nOpcao nao localizada!!!");
            break;
        }
    }
}
