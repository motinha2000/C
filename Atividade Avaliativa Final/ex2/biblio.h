typedef float Itemp; //tipo dos itens

typedef struct pilha
{
    int max;
    int topo;
    Itemp *item;
} *Pilha;

Pilha pilha(int m);
int vaziap(Pilha P);
int cheiap(Pilha P);
void empilha(Itemp x, Pilha *P);
Itemp desempilha(Pilha *P);
Itemp topo(Pilha P);
void destroip(Pilha *Q);

void menu(Pilha *G);
void adicionar(Pilha *P);
void remover(Pilha *P);
void ver_topo(Pilha *P);