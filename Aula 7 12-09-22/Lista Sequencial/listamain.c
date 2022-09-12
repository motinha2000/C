#include <stdio.h>
#include <string.h>
#include "listaseq.h"

int main()
{
    Lista *li = cria_lista();
    struct aluno al1;
    al1.matricula = 1;
    strcpy(al1.nome, "Joao");
    al1.n1 = 10.0;
    al1.n2 = 2.00;
    al1.n3 = 8.00;
    insere_lista_inicio(li, al1);
    printf("O tamanho da lista --->");
    return 0;
}
