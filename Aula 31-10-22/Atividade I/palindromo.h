typedef char Itemf;
typedef char Itemp;

#define avanca(i) (i = (i + 1) % F->max)

typedef struct fila
{
    int max;
    int total;
    int inicio;
    int final;
    Itemf *item;
} * Fila;

typedef struct pilha
{
    int max;
    int topo;
    Itemp *item;
} * Pilha;

Fila fila(int m);
int vaziaf(Fila F);
int cheiaf(Fila F);
void enfileira(Itemf x, Fila F);
Itemf desenfileira(Fila F);
void destroif(Fila *G);

Pilha pilha(int m);
void empilha(Itemp x, Pilha *P);
Itemp desempilha(Pilha *P);
void destroip(Pilha *Q);
int vaziap(Pilha *P);
int cheiap(Pilha *P);