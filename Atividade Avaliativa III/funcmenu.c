#include "biblio.h"
#include <stdio.h>

void insere(Lista *G){
    Item aux;
    puts("\nInforme o nome do paciente: ");
    gets(aux.nome);
    fflush(stdin);
    puts("\nInforme a prioridade deste paciente: ");
    scanf("%d",&aux.prior);
    fflush(stdin);

    ins_ord(aux,G);
}

void chamar(Lista *G){
    puts("\nChamado!");
}

void retira(Lista *G){
    puts("\nRetirado");
}