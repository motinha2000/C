#include <stdio.h>
#include "calcula.h"

float leitura(float *n){
    printf("Digite um numero\n");
    scanf("%f", n);
}

float soma(float x1, float x2){
    return x1+x2;
}

float subtracao(float x1, float x2){
    return x1-x2;
}

float multiplicacao(float x1, float x2){
    return x1*x2;
}

float divisao(float x1, float x2){
    return x1/x2;
}

void menu(float a, float b){
    int op;
    printf("Escolha uma opção: '1' Adicao; '2' Subtracao; '3' Multiplicacao; '4' Divisao\n");
    scanf("%d", &op);
    switch(op){
        case 1: printf("A soma entre %.2f e %.2f é: %.2f", a, b, soma(a,b)); break;
        case 2: printf("A subtracao entre %.2f e %.2f é: %.2f", a, b, subtracao(a,b)); break;
        case 3: printf("A multiplicacao entre %.2f e %.2f é: %.2f", a, b,multiplicacao(a,b)); break;
        case 4: printf("A divisao entre %.2f e %.2f é: %.2f", a, b,divisao(a,b)); break;
    }
}