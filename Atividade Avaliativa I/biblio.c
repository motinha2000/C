/*Arquivo que carrega as funções do arquivo cabeçalho.*/
#include <stdio.h>  //biblioteca base de entrada e saida
#include "biblio.h" //adição do cabelho

// FUNÇÕES BASE:

void leitura(Escaninho *pessoa, int tam)//cadastro
{
    for (int i = 0; i < tam; i++)
    {
        printf("\nID: ");
        scanf("%d", &pessoa[i].id);
        printf("\nEscolha o Tipo volume pelo número: 1- Bolsa pequena, 2-Bolsa Grande, 3-Mochila, 4-Sacola, 5-Caixa: ");
        scanf("\n%d", &pessoa[i].tipvol);
        printf("\nEscolha a localização(NÚMERO DE 0 A 12!)");
        scanf("%d", &pessoa[i].locali);
        printf("\nInforme o cpf do acompanhante: ");
        scanf("%s", pessoa[i].cpfacomp);
        printf("\nInforme o cpf do paciente: ");
        scanf("%s", pessoa[i].cpfpaci);
        printf("\nUsuario Cadastrado\n");
    }
}

void escrita(Escaninho *pessoa, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("\nID:%d", pessoa[i].id);
        switch (pessoa[i].tipvol)
        {
        case 1:
            printf("\nBolsa pequena");
            break;
        case 2:
            printf("\nBolsa grande");
            break;
        case 3:
            printf("\nMochila");
            break;
        case 4:
            printf("\nSacola");
            break;
        case 5:
            printf("\nCaixa");
            break;
        default:
            printf("\nopcao Invalida");
            break;
        }
        printf("\nlocalização: %d", pessoa[i].locali);
        printf("\ncpf do acompanhante: %s", pessoa[i].cpfacomp);
        printf("\ncpf do paciente: %s", pessoa[i].cpfpaci);
    }
}

void menu(Escaninho *pessoa, int tam)
{
    int op = 0;

    do
    {
        printf("\nSeja bem-vindo(a)!");
        printf("\n1.Entrada de volume no escaninho.");                   // Cadastro
        printf("\n2.Busca de volumes por CPF do acompanhante.");         // busca por cpf do acompanhante
        printf("\n3.Busca de volumes por CPF do paciente.");             // busca por cpf do paciente
        printf("\n4.Volumes armazenados atualmente.");                   // imprimir dados do paciente e do acompanahnte e a localização no escaninho
        printf("\n5.Quantidade de volumes de acordo com o tipo.");       // busca por tipvol
        printf("\n6.Volume armazenado em uma determinada localização."); // imprimir o tipo do volume na determinada localização fornecida
        printf("\nDigite a opcao desejada --> ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            leitura(pessoa, tam);
            break; // chamada da função para cadastro de pessoa
        case 2:
            buscpfacomp(pessoa, tam);
            break; // busca de volumes por cpf do acompanhante
        case 3:
            buscacpfpaci(pessoa, tam);
            break; // busca de volumes por cpf do paciente
        case 4:
            volumetotal(pessoa, tam);
            break; // relatório dos volumes totais contendo: cpfpaci, cpfacomp e localizacao;
        case 5:
            volumeportipo(pessoa, tam);
            break;
        case 6:
            volumeporlocali(pessoa, tam);
            break;
        case 7:
            printf("\nSaindo...");
            break;
        default:
            printf("\nOpção inexistente");
            break;
        }
    } while (op != 7);
}

// ALGORITMOS DE BUSCA ABAIXO:

void buscacpfacomp(Escaninho *pessoa, int tam)
{   
    Escaninho aux;
    bubblesort(pessoa, tam);
    printf("Informe o CPF do acompanhante, para busca de volumes.");
    scanf("%s", aux.cpfacomp);

    for(int i=0;i<tam;i++){

    }
}

// ALGORITMOS DE ORDENAÇÂO ABAIXO:

void bubblesort(Escaninho *pessoa, int tam)
{
    Escaninho aux;
    for (int i = 0; i < tam - 1; i++)
        for (int j = i + 1; j < tam; j++)
            if (pessoa[i].id > pessoa[j].id)
            {
                aux = pessoa[i];
                pessoa[i] = pessoa[j];
                pessoa[j] = aux;
            }
    free(aux);
}

void mergesort(Escaninho *pessoa, int tam)
{
}

void quicksort(Escaninho *pessoa, int tam)
{
}
