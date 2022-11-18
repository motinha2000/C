#include "filas.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int pf,bs,pj;
    pf=bs=pj=0;

    Fila PF = fila(5);
    Fila BS = fila(5);
    Fila PJ = fila(5);

    menu(PF,BS,PJ,&pf,&bs,&pj);
}