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
    Vetor localizacao[12];// criação da váriavel que será usada para guardar a localização
    for(int i=0;i<12;i++){//preenchimento das posições do vetor
        localizacao[i]=0;
    }
    Escaninho *pessoa; // criação da variável pessoa do tipo Escaninho

    menu(pessoa, localizacao);
    // void menu(pessoa, tam);
    // bubblesort(v,tam);
    // printf("\nQual elemento deseja buscar? ");
    // scanf("%d",&elem);
    // if(buscabin(v,tam,elem))
    //     printf("Elemento encontrado ");
    // else
    //     printf("Elemento não encontrado");

    return 0;
}
