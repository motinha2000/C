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
    Escaninho *pessoa; // criação da variável pessoa do tipo Escaninho
    pessoa = malloc(12*sizeof(Escaninho));
    for(int i=0;i<2;i++){//preenchimento das posições do vetor para controle da localizacao futuramente
        pessoa[i].localizacao=-1;
    }

    menu(pessoa);//chamada da função principal MENU

    return 0;
}
