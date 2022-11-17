typedef int Itemf; // tipo dos itens

typedef struct fila
{
    int max;     // capacidade da fila
    int total;   // posição do topo
    int inicio;  // posição do inicio
    int final;   // posição do final
    Itemf *item; // itens da fila
} * Fila;

#define avanca(i) (i = (i + 1) % F->max); //função inline

//FUNÇÕES PARA FUNCIONAMENTO DA FILA
Fila fila(int m);
int vaziaf(Fila F);
int cheiaf(Fila F);
void enfileira(Itemf x, Fila F);
Itemf desenfileira(Fila F);
void destroif(Fila *G);

//FUNÇÃO DO MENU
void menu(Fila PF, Fila BS, Fila PJ);

//FUNÇÃO PARA GERAR SENHA
void gerarsenha(Fila PF, Fila BS, Fila PJ);
//FUNÇÃO PARA CHAMAR SENHA
void chamarsenha(Fila PF, Fila BS, Fila PJ);
