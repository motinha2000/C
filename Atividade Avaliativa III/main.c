#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    Item x;
    strcpy(x.nome,"teste");
    x.prior = -1;
    Lista G = no(x,NULL);
    menu(&G);
}