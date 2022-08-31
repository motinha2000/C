/* ATIVIDADE AVALIATIVA:
Um hospital precisa organizar os volumes trazidos por acompanhantes de pacientes internados. 
Cada acompanhante pode guardar apenas um volume no  hospital enquanto assiste ao paciente. 
Sugeriu-se que esse controle de volumes fosse realizado por meio de um programa de computador.
*/
#include <stdio.h>
#include "biblio.h"
#include <stdlib.h>

int main()
{   
    int tam=0;//criação da váriavel que será usada para futura alocação dinâmica
    Escaninho *pessoa;//criação da variável pessoa do tipo Escaninho
    
    printf("Informe a quantidade de pessoas a serem cadastradas: ");
    scanf("%d", &tam);//leitura da variável
    
    pessoa = malloc(tam*sizeof(Escaninho));//alocação dinâmica do vetor de struct pessoa
    
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
