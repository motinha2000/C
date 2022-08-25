#include "merge.h"
#include <stdio.h>

int tleitura(){
    int tam;
    printf("Informe o tamanho do vetor");
    scanf("%d", &tam);

    return tam;
}

void vleitura(int tam, int *vet){
    for(int i=0;i<tam;i++){
        printf("\nDigite um valor para o elemento: ");
        scanf("%d", &vet[i]);
    }
}

void escrita(int tam, int *vet){
    for(int i=0;i<tam;i++){
        printf("\n Elemento %d-Valor: %d", i, vet[i]);
    }
}

void merge(){

}