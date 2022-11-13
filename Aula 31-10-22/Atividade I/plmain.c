#include "palindromo.h"
#include "C:\Users\gamot\Documents\Vs Code\C\Aula 8 03-10-22\Pilha Conversor Binário\pilha.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char s[256];
    Fila F = fila(256);
    Pilha P = pilha(256);
    printf("\nFrase? ");
    gets(s);
    for (int i = 0; s[i]; i++)
        if (isalpha(s[i]))
        {
            enfileira(s[i], F);
            empilha(s[i], P);
        }
    while (!vaziaf(F) && desenfileira(F) == desempilha(P));
        
    if (vaziaf(F))
        puts("A frase eh palindroma");
    else
        puts("A frase nao eh palindroma");
    destroif(&F);
    destroip(&P);
    return 0;
}