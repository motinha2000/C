#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

void menu()
{
    int op = -1;
    while (op != 0)
    {
        puts("\n1 - Insere um paciente na fila.");
        puts("2 - Chama um paciente da fila.");
        puts("3 - Retira paciente da fila.");
        puts("0 - Sair do programa.");
        printf("Informe a opcao: ");
        scanf("%d", &op);

        switch (op)
        {
            case 1: break;
            case 2: break;
            case 3: break;
            case 0: puts("\nSaindo...\n");break;
            default: puts("\nOpcao nao localizada!!!");
        }
    }
}