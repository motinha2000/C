#define fmt "\nItem: %d " // formato de exibiÃÂ§ÃÂ£o dos itens

typedef int Item; // tipo dos itens na lista
typedef struct no // estrutura dos nÃÂ³s da lista
{
    Item item;
    struct no *prox;
} * Lista; // tipo de ponteiro para a lista

Lista no(Item x, Lista p); // criação da lista, X o conteudo, e P o endereÃÂ§o
void exibe(Lista L);
void f(void);
void destroi(Lista *L);
int tam(Lista L);
int pert(Item x, Lista L);
Lista clone(Lista L);
void exibe_inv(Lista L);
int ocorrencias(Item x, Lista L);
void ins_ord(Item x, Lista *L);
void rem(Item x, Lista *L);
int em(Item x, Lista L);
void ins_nem(Item x, Lista *L);

