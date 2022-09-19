#include "listlig.h"
#include <stdio.h>

int main()
{
    Lista L = no(3,no(1,no(5,NULL)));
    exibe_inv(L);
    return 0;
}