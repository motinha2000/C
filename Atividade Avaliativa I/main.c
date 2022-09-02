/* ATIVIDADE AVALIATIVA:
Um hospital precisa organizar os volumes trazidos por acompanhantes de pacientes internados.
Cada acompanhante pode guardar apenas um volume no  hospital enquanto assiste ao paciente.
Sugeriu-se que esse controle de volumes fosse realizado por meio de um programa de computador.
*/

#include <stdio.h>
#include "biblio.h"
#include <stdlib.h>
#include <locale.h>

int main()
{   
    setlocale( LC_ALL, "" );
    Escaninho *pessoa; // criação da variável pessoa do tipo Escaninho
    pessoa = malloc(12*sizeof(Escaninho));
    for(int i=0;i<12;i++){//preenchimento das posições do vetor
        pessoa[i].localizacao=-1;
    }
    
    menu(pessoa);

    return 0;
}
