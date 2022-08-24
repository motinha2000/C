//2)Usando o conceito de criação de tipo em C (typedef), refaça o item 1;

#include <stdio.h>

int main(int argc, char const *argv[])
{
    typedef int vetor[10];
    vetor vet;

    for(int i=0;i<10;i++){
        scanf("%d", &vet[i]);
    }

    for(int i=0;i<10;i++){
        printf("-%d-", vet[i]);
    }


    return 0;
}
