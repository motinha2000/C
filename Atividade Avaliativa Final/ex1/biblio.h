#define fmt "\n%d"

typedef int Item;
typedef struct no{
    Item item;
    struct no *prox;
}*Lista;

Lista no(Item x, Lista p);
void exibe(Lista L);
void anexa(Lista *A, Lista B);
void f(void);
void destroi(Lista *L);
int tam(Lista L);