#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// FUNÇÂO DO MENU PRINCIPAL
void menu()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao = 1;
    static char e[256];
    static char aux[256];

    while (opcao != 4)
    {
        printf("\n\nMenu de Opções\n");
        printf("\n1. Definição da Expressão. ");
        printf("\n2. Definição das variáveis. ");
        printf("\n3. Avaliação da Expressão Pós-fixa. ");
        printf("\n4. Sair do Programa.");
        printf("\nOpção: ");
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
            printf("\nString com variáveis: \n%s",lervar(e));
            break;
        case 3:
            printf("\nExpressão pós-fixa: %s \n", posfixai(e));
            printf("\nO valor final da expressão é: %.2f.\n", valorf(posfixaf(e)));
            break;
        case 4:
            printf("\nSaindo do Programa...\n");
            break;
        default:
            printf("\nOpção não localizada!\n");
            break;
        }
    }
}