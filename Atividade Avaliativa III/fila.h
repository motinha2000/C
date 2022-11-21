#define fmt "\nItem: %s "

//TIPO DE DADO
typedef struct paciente{
    char nome[10];
    int prior;
}Paciente;

typedef Paciente Item;

typedef struct no{
    Item item;
    struct no *prox;
}*Lista;

//FUNÇÕES PARA MANIPULAR O TIPO DE DADO
Lista no(Item x, Lista p);
void destroi(Lista *L);

//CHAMAR PACIENTE DA FILA


//RETIRA PACIENTE DA FILA


//MENU
void menu();



