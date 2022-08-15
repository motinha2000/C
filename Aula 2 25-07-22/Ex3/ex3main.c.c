#include <stdio.h>
#include <stdlib.h>
#include "ex3.h"

int main()
{   
    vetor a;
    int tam;
    printf("Digite o tamanho do vetor que será alocado dinamicamente:\n");
    scanf("%d", &tam);
    
    a = malloc(tam * sizeof(vetor));

    leitura(a, tam);
    escrita(a, tam);
    
}
