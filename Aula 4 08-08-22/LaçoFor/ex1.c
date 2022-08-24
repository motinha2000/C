// 1)Declare, preencha e imprima um vetor de 10 posições do tipo inteiro.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[10];
    for(int i=0; i<10;i++){
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<10;i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}
