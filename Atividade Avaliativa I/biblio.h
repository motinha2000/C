/*Arquivo de cabeçalho para main e arquivo que carrega funções*/
typedef struct Escaninho
{
    int id;
    int tipvol;
    char cpfacomp[12];
    char cpfpaci[12];
} Escaninho;

typedef int Vetor;

// funções base
void leitura(Escaninho *pessoa, Vetor localizacao[] ); // cadastro
void menu(Escaninho *pessoa, Vetor *localizacao );    // menu principal

// funções de relatório
void volumetotal(Escaninho *pessoa, Vetor *localizacao );     // imprime volume total de objetos, com cpfpaci, cpfacomp e localização
void volumeportipo(Escaninho *pessoa, Vetor *localizacao );   // imprime o total de um tipo de objeto armazenado
void volumeporlocali(Escaninho *pessoa, Vetor *localizacao ); // imprime o tipo de objeto em uma determinada localização

// funções de busca
void buscacpfacomp(Escaninho *pessoa, Vetor *localizacao ); // imprime o tipo de volume e a localização que o acomp guardou
void buscacpfpaci(Escaninho *pessoa, Vetor *localizacao );  // imprime o tipo de volume e a localiza~ção que o acomp guardou com base no paciente que está visitando

// funções de algoritmos de ordenação
void bubblesort(Escaninho *pessoa, Vetor *localizacao ); // algoritmo de ordenação bubblesort
void mergesort(Escaninho *pessoa, Vetor *localizacao );  // algoritmo de ordenação mergesort
void quicksort(Escaninho *pessoa, Vetor *localizacao );  // algoritmo de ordenação quicksort