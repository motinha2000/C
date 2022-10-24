#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O DO MENU PRINCIPAL
void menu()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao = 1;
    char e[257];
    while (opcao != 4)
    {
        printf("\nMenu de Op��es");
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
            printf("\nPosfixa: %s\n", posfixai(e));
            break;
        case 2:
            printf("\nQual o valor das vari�veis?\n");
            break;
        case 3:
            printf("\nO valor final da express�o �: %d.\n",valori(posfixai(e)));
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