typedef struct Escaninho{
 int id;
 int tipvol;
 int locali;
 char cpfacomp[12];
 char cpfpaci[12];
}Escaninho;

void leitura(Escaninho *pessoa, int tam);
void escrita(Escaninho *pessoa, int tam);
void menu(Escaninho *pessoa, int tam);

void relatorio(Escaninho *pessoa, int tam);
void volumetotal(Escaninho *pessoa, int tam); 
void volumeportipo(Escaninho *pessoa, int tam); 
void volumeporlocali(Escaninho *pessoa, int tam); 
            
void mergesort(Escaninho *pessoa, int tam);
void quicksort(Escaninho *pessoa, int tam);
void bubblesort(int v[], int tam);

int buscabin(int v[],int tam, int x);

