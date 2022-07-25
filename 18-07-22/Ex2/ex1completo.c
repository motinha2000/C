#include <stdio.h>
#define tam 10

void leitura(int *vetor){
    for(int i=0;i<tam;i++){
        scanf("%d", &vetor[i]);
    }
}

void imprimir(int *vetor){
    for(int i=0;i<tam;i++){
        printf("%d, ", vetor[i]);
    }
    printf("\n");
}

void calcular(int *vetor){
    int k;
    printf("Digite um valor para multiplicar.\n");
    scanf("%d", &k);
    
    for(int i=0;i<tam;i++){
       vetor[i]=k*vetor[i];
    }
}
int main(){
    int vetor[tam];
    leitura(vetor);
    imprimir(vetor);
    calcular(vetor);
    imprimir(vetor);
}