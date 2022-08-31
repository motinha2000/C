/*Arquivo de cabeçalho para main e arquivo que carrega funções*/
typedef struct Escaninho
{
    int id;
    int tipvol;
    int locali;
    char cpfacomp[12];
    char cpfpaci[12];
} Escaninho;

// funções base
void leitura(Escaninho *pessoa, int tam); // cadastro
void escrita(Escaninho *pessoa, int tam); // função a ser usada futuramente
void menu(Escaninho *pessoa, int tam);    // menu principal

// funções de relatório
void volumetotal(Escaninho *pessoa, int tam);     // imprime volume total de objetos, com cpfpaci, cpfacomp e localização
void volumeportipo(Escaninho *pessoa, int tam);   // imprime o total de um tipo de objeto armazenado
void volumeporlocali(Escaninho *pessoa, int tam); // imprime o tipo de objeto em uma determinada localização

// funções de busca
void buscacpfacomp(Escaninho *pessoa, int tam); // imprime o tipo de volume e a localização que o acomp guardou
void buscacpfpaci(Escaninho *pessoa, int tam);  // imprime o tipo de volume e a localiza~ção que o acomp guardou com base no paciente que está visitando

// funções de algoritmos de ordenação
void bubblesort(Escaninho *pessoa, int tam); // algoritmo de ordenação bubblesort
void mergesort(Escaninho *pessoa, int tam);  // algoritmo de ordenação mergesort
void quicksort(Escaninho *pessoa, int tam);  // algoritmo de ordenação quicksort