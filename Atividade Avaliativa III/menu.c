#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>

void menu(Lista *G, int *c)
{   
    int op = -1;
    while (op != 0)
    {
        puts("\n1 - Insere um paciente na fila.");
        puts("2 - Chama um paciente da fila.");
        puts("3 - Retira paciente da fila.");
        puts("4 - DEBUG: Exibir a fila.");
        puts("0 - Sair do programa.");
        printf("Informe a opcao: ");
        scanf("%d", &op);
        fflush(stdin);

        switch (op)
        {
            case 1: insere(G,c);break;
            case 2: chamar(G);break;
            case 3: retira(G);break;
            case 4: mostrar(*G);break;
            case 0: printf("\nSaindo...\n");break;
            default: puts("\nOpcao nao localizada!!!");break;
        }
    }
}
