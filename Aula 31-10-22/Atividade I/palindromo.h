typedef char Itemf;

typedef struct fila
{
    int max;
    int total;
    int inicio;
    int final;
    Itemf *item;
} * Fila;

Fila fila(int m);
int vaziaf(Fila F);
int cheiaf(Fila F);
void enfileira(Itemf x, Fila F);
Itemf desenfileira(Fila F);
void destroif(Fila *G){
    free((*G)->item);
    free(*G);
    *G=NULL;
}