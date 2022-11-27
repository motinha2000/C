#define fmt "\nItem: %s "

// TIPO DE DADO
typedef struct paciente
{
    char nome[10];
    int prior;
}Paciente;

typedef Paciente Item;

typedef struct no
{
    Item item;
    struct no *prox;
} * Lista;


// FUNCOES PARA MANIPULAR O TIPO DE DADO
Lista no(Item x, Lista p);
void destroi(Lista *L);
void ins_ord(Item x, Lista *L);

// MENU
void menu(Lista *G);
// INSERIR PACIENTE NA FILA
void insere(Lista *G);
// CHAMAR PACIENTE DA FILA
void chamar(Lista *G);
// RETIRA PACIENTE DA FILA
void retira(Lista *G);
// MOSTRA PACIENTES NA FILA
void mostrar(Lista *G);