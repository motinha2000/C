#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// FUN��O DO MENU PRINCIPAL
void menu()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao = 1;
    static char e[256];
    static char aux[256];

    while (opcao != 4)
    {
        printf("\n\nMenu de Op��es\n");
        printf("\n1. Defini��o da Express�o. ");
        printf("\n2. Defini��o das vari�veis. ");
        printf("\n3. Avalia��o da Express�o P�s-fixa. ");
        printf("\n4. Sair do Programa.");
        printf("\nOp��o: ");
        scanf("%d", &opcao);
        fflush(stdin);
        switch (opcao)
        {
        case 1:
            printf("\nInfixa? ");
            gets(e);
            fflush(stdin);
            break;
        case 2:
            //strcpy(aux,lervar(e));
            printf("\nString com vari�veis: \n%s",lervar(e));
            break;
        case 3:
            printf("\nExpress�o p�s-fixa: %s \n", posfixai(e));
            printf("\nO valor final da express�o �: %.2f.\n", valorf(posfixaf(e)));
            break;
        case 4:
            printf("\nSaindo do Programa...\n");
            break;
        default:
            printf("\nOp��o n�o localizada!\n");
            break;
        }
    }
}