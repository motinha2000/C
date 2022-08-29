#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void leitura(int *vet, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
}

void escrita(int *vet, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d-", vet[i]);
    }
}

void merge(int *vet, int inicio, int meio, int fim)
{
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2=0;
    tamanho = fim-inicio+1;
    p1=inicio;
    p2=meio+1;
    temp = (int *) malloc(tamanho*sizeof(int));
    if(temp != NULL){
        for(i=0; i<tamanho; i++){
            if(!fim1 && !fim2){
                if(vet[p1] < vet[p2])
                    temp[i]=vet[p1++];
                else
                    temp[i]=vet[p2++];
                
                if(p1>meio) fim=1;
                if(p2>fim) fim2=1;
            }
            else{
                if(!fim1)
                    temp[i]=vet[p1++];
                else
                    temp[i]=vet[p2++];
            }
        }
        for(j=0, k=inicio;j<tamanho;j++,k++)
            vet[k]=temp[j];
    }
    free(temp);
}

void mergeSort(int *vet, int inicio, int fim)
{   
    int meio;
    if(inicio<fim)
    {
        meio=floor((inicio+fim)/2);
        mergeSort(vet,inicio,meio);
        mergeSort(vet,meio+1,fim);
        merge(vet,inicio,meio,fim);
    }
}



int main()
{

    int *vet;
    int tam;

    printf("Quantidade de elementos no vetor: ");
    scanf("%d", &tam);

    vet = (int *)malloc(tam * sizeof(int));

    leitura(vet, tam);
    escrita(vet, tam);
    mergeSort(vet,0,tam);
    printf("\nVETOR ORDENADO: ");
    escrita(vet,tam);
}