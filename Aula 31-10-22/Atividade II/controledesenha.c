#include "filas.h"
#include <stdio.h>
#include <stdlib.h>

void gerarsenha(Fila PF, Fila BS, Fila PJ, int *pf, int *bs, int *pj)
{
    int op = -1;

        printf("\n1 - Pessoa Fisica.");
        printf("\n2 - Beneficio Social.");
        printf("\n3 - Pessoa Juridica.");
        printf("\n0 - Voltar ao menu anterior.");
        printf("\nInforme uma Opcao: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            enfileira(++(*pf), PF);
            printf("\nSenha - %d para atendimento PF gerada.",*pf);
            break;
            return ;
        case 2:
            enfileira(++(*bs), BS);
            printf("\nSenha - %d para atendimento BS gerada.",*bs);
            break;
            return ;
        case 3:
            enfileira(++(*pj), PJ);
            printf("\nSenha - %d para atendimento PJ gerada.",*pj);
            break;
            return ;
        case 0:
            break;
            return ;
        default:
            printf("Opcao nao localizada!");
        }

    return;
}

void chamarsenha(Fila PF, Fila BS, Fila PJ, int *pf, int *bs, int *pj)
{
    int op = -1;
    do
    {
        printf("\n1 - Chamar Pessoa Fisica.");
        printf("\n2 - Chamar Beneficio Social.");
        printf("\n3 - Chamar Pessoa Juridica.");
        printf("\n0 - Voltar ao menu anterior.");
        printf("\nInforme uma Opcao: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("\nAtendimento: %d", desenfileira(PF));
            break;
        case 2:
            printf("\nAtendimento: %d", desenfileira(BS));
            break;
        case 3:
            printf("\nAtendimento: %d", desenfileira(PJ));
            break;
        case 0:
            break;
        default:
            printf("\nOpcao nao localizada!");
        }
    } while (op != 0);

    return;
}