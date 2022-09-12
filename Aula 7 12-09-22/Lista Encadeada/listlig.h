#define fmt "%d " // formato de exibição dos itens

typedef int Item; // tipo dos itens na lista
typedef struct no // estrutura dos nós da lista
{
    Item item;
    struct no *prox;
} * Lista; // tipo de ponteiro para a lista

Lista no(Item x, Lista p); // criação da lista, X o conteudo, e P o endereço
void exibe(Lista L);
void f(void);