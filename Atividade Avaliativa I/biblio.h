/*Arquivo de cabeçalho para main e arquivo que carrega funções*/
typedef struct Escaninho
{
    int id;
    int tipvol;
    char cpfacomp[12];
    char cpfpaci[12];
} Escaninho;

typedef int vetor;

// funções base
void leitura(Escaninho *pessoa, vetor *localizacao ); // cadastro
void escrita(Escaninho *pessoa, vetor *localizacao ); // função a ser usada futuramente
void menu(Escaninho *pessoa, vetor *localizacao );    // menu principal

// funções de relatório
void volumetotal(Escaninho *pessoa, vetor *localizacao );     // imprime volume total de objetos, com cpfpaci, cpfacomp e localização
void volumeportipo(Escaninho *pessoa, vetor *localizacao );   // imprime o total de um tipo de objeto armazenado
void volumeporlocali(Escaninho *pessoa, vetor *localizacao ); // imprime o tipo de objeto em uma determinada localização

// funções de busca
void buscacpfacomp(Escaninho *pessoa, vetor *localizacao ); // imprime o tipo de volume e a localização que o acomp guardou
void buscacpfpaci(Escaninho *pessoa, vetor *localizacao );  // imprime o tipo de volume e a localiza~ção que o acomp guardou com base no paciente que está visitando

// funções de algoritmos de ordenação
void bubblesort(Escaninho *pessoa, vetor *localizacao ); // algoritmo de ordenação bubblesort
void mergesort(Escaninho *pessoa, vetor *localizacao );  // algoritmo de ordenação mergesort
void quicksort(Escaninho *pessoa, vetor *localizacao );  // algoritmo de ordenação quicksort