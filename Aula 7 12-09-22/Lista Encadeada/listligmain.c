#include "listlig.h"
#include <stdio.h>

int main()
{
    Lista L = no(3, NULL);
    ins(1, &L);
    ins(2, &L);
    ins(1, &L);
    ins(2, &L);

    exibe(L);

    rem_rep(1, &L);
    rem_rep(2, &L);
    printf("\n==================================");
    exibe(L);

    return 0;
}