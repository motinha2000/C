#include <stdio.h>
#include <stdlib.h>
#include "ex3.h"

void leitura(vetor a, int tam){
    for(int i=0;i<tam;i++){
        printf("Informe um valor para a Posicao[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void escrita(vetor a, int tam){
    for(int i=0;i<tam;i++){
        printf("Posicao[%d]-Valor[%d]\n", i, a[i]);
    }
}

void ordenar(vetor a, int tam){
    int aux;
    for(int i=0;i<tam;i++){
        for(int j=0;i<tam;j++){
            if(a[j]<a[i]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
}