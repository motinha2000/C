#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//FUNÇÂO DO MENU PRINCIPAL
void menu()
{
    setlocale(LC_ALL, "Portuguese_BR");
    int opcao = 1;
    char exp[100];
    while (opcao != 4)
    {
        printf("\nMenu de Opções");
        printf("\n1. Definição da Expressão. ");
        printf("\n2. Definição das variáveis. ");
        printf("\n3. Avaliação da Expressão Pós-fixa. ");
        printf("\n4. Sair do Programa.");
        printf("\nOpção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("\nDigite a expressão: ");
            scanf("%s", exp);
            printf("\nExpressão Pósfixa: AB+C-");
            break;
        case 2:
            printf("\nQual o valor das variáveis? ");
            break;
        case 3:
            printf("\nO valor final da expressão é: 10");
            break;
        case 4:
            printf("\nSaindo do Programa...");
            break;
        default:
            printf("\nOpção não localizada!");
            break;
        }
    }
}