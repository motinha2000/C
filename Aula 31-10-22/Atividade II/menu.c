#include "filas.h"
#include <stdio.h>
#include <stdlib.h>

void menu(Fila PF, Fila BS, Fila PJ)
{
    int op = -1;
    while (op != 0)
    {
        printf("\n1 - Para pegar uma senha.");
        printf("\n2 - Para chamar uma senha.");
        printf("\n0 - Para encerrar o expediente!");
        printf("\nInforme uma Opcao: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            gerarsenha(PF, BS, PJ);
            break;

        case 2:
            chamarsenha(PF, BS, PJ);
            break;

        case 0:
            break;

        default:
            printf("\nOpcao nao localizada.");
            break;
        }
    }
}