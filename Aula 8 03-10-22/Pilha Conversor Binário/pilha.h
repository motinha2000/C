typedef int Itemp;

typedef struct pilha
{
    int max;
    int topo;
    Itemp *item;
} *Pilha;

Pilha pilha(int m);
int vaziap(Pilha *P);
int cheiap(Pilha *P);
void empilha(Itemp x, Pilha *P);
Itemp desempilha(Pilha *P);
Itemp topo(Pilha *P);
void destroip(Pilha *Q);