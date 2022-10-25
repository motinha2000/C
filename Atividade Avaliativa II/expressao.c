#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "biblio.h"

// FUN��ES PARA TRATAMENTO DA EXPRESS�O INFIXA

int prio(char o)
{
    switch (o)
    {
    case '(':
        return 0;
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    }
    return -1; // operador inv�lido!
}

char *posfixai(char *e)
{
    static char s[256];
    int j = 0;
    Pilha P = pilha(256);
    for (int i = 0; e[i]; i++)
        if (e[i] == '(')
            empilha('(', P);

        else if (strchr("+-/*", e[i]))
        {
            while (!vaziap(P) && prio(topo(P)) >= prio(e[i]))
                s[j++] = desempilha(P);
            empilha(e[i], P);
        }
        else if (e[i] == ')')
        {
            while (topo(P) != '(')
                s[j++] = desempilha(P);
            desempilha(P);
        }
        else if (!isdigit(e[i]))
            s[j++] = e[i];
    while (!vaziap(P))
        s[j++] = desempilha(P);
    s[j] = '\0';
    destroip(&P);
    return s;
}

int valori(char *e)
{
    Pilha P = pilha(256);
    for (int i = 0; e[i]; i++)
        if (isdigit(e[i]))
            empilha(e[i] - '0', P);
        else
        {
            int y = desempilha(P);
            int x = desempilha(P);
            switch (e[i])
            {
            case '+':
                empilha(x + y, P);
                break;
            case '-':
                empilha(x - y, P);
                break;
            case '*':
                empilha(x * y, P);
                break;
            case '/':
                empilha(x / y, P);
                break;
            }
        }
    int z = desempilha(P);
    destroip(&P);
    return z;
}

char *posfixaf(char *e)
{
    static char s[256];
    Pilha P = pilha(256);
    int j = 0;
    for (int i = 0; e[i]; i++)
        if (e[i] == '(')
            empilha('(', P);
        else if (isdigit(e[i]) || e[i] == '.')
            s[j++] = e[i];
        else if (strchr("+*-/", e[i]))
        {
            s[j++] = ' ';
            while (!vaziap(P) && prio(topo(P)) >= prio(e[i]))
                s[j++] = desempilha(P);
            empilha(e[i], P);
        }
        else if (e[i] == ')')
        {
            while (topo(P) != '(')
                s[j++] = desempilha(P);
            s[j] = '\0';
            destroip(&P);
            return s;
        }
}

float valorf(char *e)
{
    Pilha P = pilha(256);
    for (int i = 0; e[i]; i++)
        if (isdigit(e[i]))
        {
            empilha(atof(e + i), P);
            while (isdigit(e[i + 1]) || e[i + 1] == '.')
                i++;
        }
        else if (strchr("+*-/", e[i]))
        {
            float y = desempilha(P);
            float x = desempilha(P);
            switch (e[i])
            {
            case '+':
                empilha(x + y, P);
                break;
            case '-':
                empilha(x - y, P);
                break;
            case '*':
                empilha(x * y, P);
                break;
            case '/':
                empilha(x / y, P);
                break;
            }
        }
    float z = desempilha(P);
    destroip(&P);
    return z;
}

void lervar(char *e)
{
    char s[256];
    char x;

    strcpy(s, posfixai(e));
    printf("\n%s\n", s);

    for (int i = 0; s[i] != '\0'; i++)
    {

        if (s[i] >= 'a' && s[i] <= 'z' || s[i]>='A' && s[i] <= 'Z')
        {
            printf("\nEncontrei a vari�vel %c.\n", s[i]);
        }
    }
}
