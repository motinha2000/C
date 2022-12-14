#define fmt "\n%d"

typedef int Item;
typedef struct no{
    Item item;
    struct no *prox;
}*Lista;
//TIPO DE DADO
Lista no(Item x, Lista p);
void exibe(Lista L, int *c);
void anexa(Lista *A, Lista B);
void f(void);
void destroi(Lista *L, int *c);
int tam(Lista L);
int pert(Item x, Lista L);
Lista clone(Lista L);
void exibe_inv(Lista L);
void ins_ord(Item x, Lista *L);
//MENU
void menu(Lista *G, int *c);
void insere(Lista *G, int *c);
void procura(Lista *G, int *c);