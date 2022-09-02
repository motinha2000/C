/*Arquivo de cabeçalho para main e arquivo que carrega funções*/

typedef struct Escaninho
{
    int id;
    int tipvol;
    char cpfacomp[12];
    char cpfpaci[12];
    int localizacao;
} Escaninho;

// funções base
void leitura(Escaninho *pessoa  ); // cadastro
void menu(Escaninho *pessoa );    // menu principal

// funções de relatório
void volumetotal(Escaninho *pessoa );     // imprime volume total de objetos, com cpfpaci, cpfacomp e localização
void volumeportipo(Escaninho *pessoa );   // imprime o total de um tipo de objeto armazenado
void volumeporlocali(Escaninho *pessoa ); // imprime o tipo de objeto em uma determinada localização

// funções de busca
void buscacpfacomp(Escaninho *pessoa ); // imprime o tipo de volume e a localização que o acomp guardou
void buscacpfpaci(Escaninho *pessoa );  // imprime o tipo de volume e a localiza~ção que o acomp guardou com base no paciente que está visitando

// funções de algoritmos de ordenação
void bubblesort(Escaninho *pessoa ); // algoritmo de ordenação bubblesort
void mergesort(Escaninho *pessoa );  // algoritmo de ordenação mergesort
void quicksort(Escaninho *pessoa );  // algoritmo de ordenação quicksort