typedef char Itemp;
typedef struct pilha
{
    int max;
    int topo;
    Itemp *item;
} * Pilha;

// FUN��O DO MENU
void menu();

// FUN��ES DA EXPRESS�O
int prio(char o);
char *posfixa(char *e);

// FUN��ES DA PILHA
Pilha pilha(int m);
int vaziap(Pilha P);
int cheiap(Pilha P);
void empilha(Itemp x, Pilha P);
Itemp desempilha(Pilha P);
Itemp topo(Pilha P);
void destroip(Pilha *Q);