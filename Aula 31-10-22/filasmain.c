#include "filas.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    Fila F = fila(5);
    enfileira(1,F);
    enfileira(2,F);
    enfileira(3,F);
    enfileira(desenfileira(F),F);
    enfileira(desenfileira(F),F);
    printf("%d\n",desenfileira(F));
}