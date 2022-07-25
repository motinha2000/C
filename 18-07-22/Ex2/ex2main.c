#include <stdio.h>
#include "ex2.h"
#include "ex2f.c"

int main()
{   
    float n1, n2;
    leitura(&n1);
    leitura(&n2);
    menu(n1, n2);
    return 0;

}