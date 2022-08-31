#include <stdio.h>
#include "biblio1.h"
#include <stdlib.h>

int main()
{   
    int tam=0;//criação da váriavel que será usada para futura alocação dinâmica
    Escaninho *pessoa;//criação da variável pessoa do tipo Escaninho
    
    printf("Informe a quantidade de pessoas a serem cadastradas: ");
    scanf("%d", &tam);
    
    pessoa = malloc(tam*sizeof(Escaninho));
    
    menu(pessoa, tam);
    //void menu(pessoa, tam);
    //bubblesort(v,tam);
    //printf("\nQual elemento deseja buscar? ");
    //scanf("%d",&elem);
    //if(buscabin(v,tam,elem))
    //    printf("Elemento encontrado ");
    //else
    //    printf("Elemento não encontrado");
  

    return 0;
}
