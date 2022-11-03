#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "biblio.h"

// FUNÇÕES PARA TRATAMENTO DA EXPRESSÃO INFIXA

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
    return -1; // operador inválido!
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
            desempilha(P);
        }
    while (!vaziap(P))
        s[j++] = desempilha(P);
    s[j] = '\0';
    destroip(&P);
    return s;
}

float valorf(char *e)
{
    char str[256];
    strcpy(str, posfixaf(e));
    Pilha P = pilha(256);
    for (int i = 0; str[i]; i++)

        if (isdigit(str[i]))
        {
            empilha(atof(str + i), P);
            while (isdigit(str[i + 1]) || str[i + 1] == '.')
                i++;
        }
        else if (strchr("+*-/", str[i]))
        {
            float y = desempilha(P);
            float x = desempilha(P);
            switch (str[i])
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

char *lervar(char *e)
{
    int j = 0;
    char x;
    static char aux[256];
    strcpy(aux, e);

    do
    {
        if (aux[j] >= 'a' && aux[j] <= 'z' || aux[j] >= 'A' && aux[j] <= 'Z')
        {
            printf("\nVariável encontrada: %c.", aux[j]);
            j++;
        }
        else
        {
            j++;
        }
    } while (e[j] < '\0');
    return aux;
}