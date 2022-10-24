#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÂO DO MENU PRINCIPAL
void menu()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao = 1;
    char e[257];
    while (opcao != 4)
    {
        printf("\nMenu de Opções");
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
            printf("\nPosfixa: %s\n", posfixai(e));
            break;
        case 2:
            printf("\nQual o valor das variáveis?\n");
            break;
        case 3:
            printf("\nO valor final da expressão é: %d.\n",valori(posfixai(e)));
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