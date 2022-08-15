#include <stdio.h>
#include "ex2.h"

void leitura(REGISTRO* v){//faz a leitura como ponteiro de v declarado em ex2main.c
    for(int i=0;i<TAM;i++){
        printf("Elemento[%d]: ", i+1);
        scanf("%d", &v[i].a);
    }
}

void impressao(REGISTRO* v){
    for(int i=0;i<TAM;i++){
            printf("Elemento[%d]: Valor=%d\n", i+1, v[i].a);
    }
}