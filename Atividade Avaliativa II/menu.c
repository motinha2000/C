#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//FUN��O DO MENU PRINCIPAL
void menu()
{
    setlocale(LC_ALL, "Portuguese_BR");
    int opcao = 1;
    char exp[100];
    while (opcao != 4)
    {
        printf("\nMenu de Op��es");
        printf("\n1. Defini��o da Express�o. ");
        printf("\n2. Defini��o das vari�veis. ");
        printf("\n3. Avalia��o da Express�o P�s-fixa. ");
        printf("\n4. Sair do Programa.");
        printf("\nOp��o: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("\nDigite a express�o: ");
            scanf("%s", exp);
            printf("\nExpress�o P�sfixa: AB+C-");
            break;
        case 2:
            printf("\nQual o valor das vari�veis? ");
            break;
        case 3:
            printf("\nO valor final da express�o �: 10");
            break;
        case 4:
            printf("\nSaindo do Programa...");
            break;
        default:
            printf("\nOp��o n�o localizada!");
            break;
        }
    }
}