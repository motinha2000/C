#include <stdio.h>
#include "ex1.h"

void leitura(int vetor[]){
    for(int i=0;i<tam;i++){
        printf("Elemento[%d]: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

void imprimir(int vetor[]){
    for(int i=0;i<tam;i++){
        printf("A posição %d tem o valor %d\n", i, vetor[i]);
    }
    
    
}