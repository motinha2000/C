#include "listlig.h"
#include <stdio.h>

int main()
{
    Lista L = no(3, NULL);
    ins_ord(1, &L);
    ins_ord(2, &L);

    exibe(L);

    //ins_nem(4, &L);

    printf("\n==================================");

    exibe(L);

    return 0;
}