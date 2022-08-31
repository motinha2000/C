#include <stdio.h>
#include "biblio1.h"

void leitura(Escaninho *pessoa, int tam){
    for(int i=0;i<tam;i++)
    {   
        printf("\nID: ");
        scanf("%d",&pessoa[i].id);
        printf("\nEscolha o Tipo volume pelo número: 1- Bolsa pequena, 2-Bolsa Grande, 3-Mochila, 4-Sacola, 5-Caixa: ");
        scanf("\n%d",&pessoa[i].tipvol);
        printf("\nEscolha a localização(NÚMERO DE 0 á 12!)");
        scanf("%d",&pessoa[i].locali);
        printf("\nInforme o cpf do acompanhante: ");
        scanf("%s", pessoa[i].cpfacomp);
        printf("\nInforme o cpf do paciente: ");
        scanf("%s", pessoa[i].cpfpaci);
        printf("\nUsuario Cadastrado\n");
    }
}

void escrita(Escaninho *pessoa, int tam){
     for(int i=0;i<tam;i++)
     {
       printf("\nID:%d", pessoa[i].id);
       switch(pessoa[i].tipvol){
           case 1: printf("\nBolsa pequena");break;
           case 2: printf("\nBolsa grande");break;
           case 3: printf("\nMochila");break;
           case 4: printf("\nSacola");break;
           case 5: printf("\nCaixa");break;
           default: printf("\nopcao Invalida");break;
       }
       printf("\nlocalização: %d", pessoa[i].locali);
       printf("\ncpf do acompanhante: %s", pessoa[i].cpfacomp);
       printf("\ncpf do paciente: %s", pessoa[i].cpfpaci);
    }
}

void menu(Escaninho *pessoa, int tam){
    int op=0;
    
    do{
        printf("\n1.Cadastro");
        printf("\n2.Relatório");
        printf("\n3.Entrada de volume no escaninho.");
        printf("\n4.Busca de volume por CPF.");
        printf("\n5.Relatório");
        printf("\n6.Sair");
        printf("\nDigite a opcao desejada -->");
        scanf("%d", &op);
        switch(op){
            case 1: leitura(pessoa, tam);break;
            case 2: relatorio(pessoa, tam);break;
            case 3: busca(pessoa, tam);break;
            case 4: printf("\nSaindo...");break;
            default: printf("\nOpção inexistente");
        }
    }while(op!=6);
    
}

void relatorio(Escaninho *pessoa, int tam){
    int op=0;
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");

    do{
        printf("\nInforme a opcao: 1.Volumes armazenados atualmente\n2.Quantidade de volumes por tipo\n3.Volume em determinada localizacao\n4.Saindo...\n");
        scanf("%d", &op);
        switch(op){
            case 1:volumetotal(pessoa, tam); break;
            case 2:volumeportipo(pessoa, tam); break;
            case 3:volumeporlocali(pessoa, tam); break;
            case 4: printf("\nSaindo...\n");break;
            default: printf("Opcao inexistente!");break;
        }
    }while(op!=4);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
}

int buscalin(int v[], int tam, int x){
    
    for(int i=0; i<tam; i++)
        if( x == v[i] )
            return 1;
    return 0; 
}
void bubblesort(int v[], int tam)
{
    int aux;
    for(int i=0;i<tam-1;i++)
        for(int j=i+1;j<tam;j++)
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
}
int buscabin(int v[], int tam, int x){
    int i, f, m;
    i = 0;
    f = tam-1;
    while( i<=f ) {
        m = (i+f)/2;
        if( x == v[m] ) return 1;
        if( x < v[m] ) f = m-1;
            else i = m+1;
    }
    return 0;
}