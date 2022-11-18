typedef int Itemf; // tipo dos itens

typedef struct fila
{
    int max;     // capacidade da fila
    int total;   // posi��o do topo
    int inicio;  // posi��o do inicio
    int final;   // posi��o do final
    Itemf *item; // itens da fila
} * Fila;

#define avanca(i) (i = (i + 1) % F->max); //fun��o inline

//FUN��ES PARA FUNCIONAMENTO DA FILA
Fila fila(int m);
int vaziaf(Fila F);
int cheiaf(Fila F);
void enfileira(Itemf x, Fila F);
Itemf desenfileira(Fila F);
void destroif(Fila *G);

//FUN��O DO MENU
void menu(Fila PF, Fila BS, Fila PJ, int* pf, int* bs, int* pj);

//FUN��O PARA GERAR SENHA
void gerarsenha(Fila PF, Fila BS, Fila PJ, int* pf, int* bs, int* pj);
//FUN��O PARA CHAMAR SENHA
void chamarsenha(Fila PF, Fila BS, Fila PJ, int* pf, int* bs, int* pj);
