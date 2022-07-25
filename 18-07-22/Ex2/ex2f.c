#include "ex2.h"
#include <stdio.h>

void leitura (int *vetor){
    for(int i=0;i<tam;i++){
        scanf("%d", &vetor[i]);
    }
}

void imprimir(int *vetor){
    for(int i=0;i<tam;i++){
        printf("%d, ", vetor[i]);
    }
    printf("\n");
}

void calcular(int *vetor){
    int k;
    printf("Digite um valor para multiplicar.\n");
    scanf("%d", &k);
    
    for(int i=0;i<tam;i++){
       vetor[i]=k*vetor[i];
    }
}