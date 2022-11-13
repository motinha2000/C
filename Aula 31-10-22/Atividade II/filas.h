typedef char Itemf; // tipo dos itens

typedef struct fila
{
    int max;     // capacidade da fila
    int total;   // posição do topo
    int inicio;  // posição do inicio
    int final;   // posição do final
    Itemf *item; // itens da fila
} * Fila;

#define avanca(i) (i = (i + 1) % F->max); //função inline

Fila fila(int m);
int vaziaf(Fila F);
int cheiaf(Fila F);
void enfileira(Itemf x, Fila F);
Itemf desenfileira(Fila F);
void destroif(Fila *G);
void menu();
