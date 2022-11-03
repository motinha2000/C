typedef char Itemf; // tipo dos itens

typedef struct fila
{
    int max;     // capacidade da fila
    int total;   // posi��o do topo
    int inicio;  // posi��o do inicio
    int final;   // posi��o do final
    Itemf *item; // itens da fila
} * Fila;

#define avanca(i) (i = (i + 1) % F->max);

Fila fila(int m);
int vaziaf(Fila F);
int cheiaf(Fila F);
void enfileira(Itemf x, Fila F);
Itemf desenfileira(Fila F);
void destroif(Fila *G);
