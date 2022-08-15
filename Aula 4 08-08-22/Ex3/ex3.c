#include <stdio.h>
#define TAM 3

int main(int argc, char const *argv[])
{
    typedef int vetor[TAM];
    vetor vet;
    int aux, contador;

    for (int i = 0; i < TAM; i++)
    { // LEITURA
        scanf("%d", &vet[i]);
    }

    for (int contador = 1; contador < TAM; contador++)
    {
        for (int i = 0; i < TAM - 1; i++)
        {
            if (vet[i] > vet[i + 1])
            {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
            }
        }
    }

    for (int i = 0; i < TAM; i++)
    { // ESCRITA
        printf("%d-", vet[i]);
    }

    return 0;
}
