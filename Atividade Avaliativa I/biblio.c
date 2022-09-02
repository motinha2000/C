/*Arquivo que carrega as funções do arquivo cabeçalho.*/
#include <stdio.h>  //biblioteca base de entrada e saida
#include "biblio.h" //adição do cabelho

// FUNÇÕES BASE:

void leitura(Escaninho *pessoa, Vetor localizacao[]) // cadastro
{   
    for(int i=0;i<12;i++)//local na memória está salvo?FAZER VARREDURA!
    {
        if(localizacao[i]==0)
        {
                printf("\nID: ");
                scanf("%d", &pessoa[i].id);
                printf("\nEscolha o Tipo volume pelo número: 1- Bolsa pequena, 2-Bolsa Grande, 3-Mochila, 4-Sacola, 5-Caixa: ");
                scanf("\n%d", &pessoa[i].tipvol);
                printf("\nInforme o CPF do acompanhante: ");
                scanf("%s", pessoa[i].cpfacomp);
                printf("\nInforme o CPF do paciente: ");
                scanf("%s", pessoa[i].cpfpaci);
                printf("\nUsuario Cadastrado com sucesso!\n");
                localizacao[i]=i;
                break;
        }
    }
}


void menu(Escaninho *pessoa, Vetor *localizacao)
{
    int op = 0;

        printf("\n_______________________________________________________________\n");
        printf("|                Seja bem-vindo(a)!                           |\n");
    do
    {
        printf("|                                                             |\n");
        printf("|    1 - Entrada de volume no escaninho.                      |\n");//Cadastro
        printf("|    2 - Busca de volumes por CPF do acompanhante.            |\n");//busca por cpf do acompanhante
        printf("|    3 - Busca de volumes por CPF do paciente.                |\n");//busca por cpf do paciente
        printf("|    4 - Volumes armazenados atualmente.                      |\n");//imprimir dados do paciente e do acompanahnte e a localização no escaninho
        printf("|    5 - Quantidade de volumes de acordo com o tipo.          |\n");//busca por tipvol
        printf("|    6 - Volume armazenado em uma determinada localizacao.    |\n");//imprimir o tipo do volume na determinada localização fornecida
        printf("|    7 - Sair do programa.                                    |\n");//Encerra o programa
        printf("|                                                             |\n");
        printf("|____________________________________Digite a opcao desejada--> ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            leitura(pessoa, localizacao);
            break; // chamada da função para cadastro de pessoa
        case 2:
            buscacpfacomp(pessoa, localizacao);
            break; // busca de volumes por cpf do acompanhante
        case 3:
            buscacpfpaci(pessoa, localizacao);
            break; // busca de volumes por cpf do paciente
        case 4:
            volumetotal(pessoa, localizacao);
            break; // relatório dos volumes totais contendo: cpfpaci, cpfacomp e localizacao;
        case 5:
            volumeportipo(pessoa, localizacao);
            break;
        case 6:
            volumeporlocali(pessoa, localizacao);
            break;
        case 7:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpção inexistente\n");
            break;
        }
    } while (op != 7);
}

// ALGORITMOS DE BUSCA ABAIXO:

void buscacpfacomp(Escaninho *pessoa, Vetor *localizacao)
{
    Escaninho aux;
    printf("\nInforme o CPF do acompanhante, para busca de volumes: ");
    scanf("%s", aux.cpfacomp);
    printf("\n");

    for (int i = 0; i < 12; i++)
    {
    }
}

void buscacpfpaci(Escaninho *pessoa, Vetor *localizacao)
{
}

// RELATÓRIOS ABAIXO:

void volumetotal(Escaninho *pessoa, Vetor *localizacao)
{}
void volumeportipo(Escaninho *pessoa, Vetor *localizacao)
{}
void volumeporlocali(Escaninho *pessoa, Vetor *localizacao)
{}
// ALGORITMOS DE ORDENAÇÂO ABAIXO:

void bubblesort(Escaninho *pessoa, Vetor *localizacao)
{
    Escaninho aux;
    for (int i = 0; i < 12 - 1; i++)
        for (int j = i + 1; j < 12; j++)
            if (pessoa[i].id > pessoa[j].id)
            {
                aux = pessoa[i];
                pessoa[i] = pessoa[j];
                pessoa[j] = aux;
            }
}

void mergesort(Escaninho *pessoa, Vetor *localizacao)
{
}

void quicksort(Escaninho *pessoa, Vetor *localizacao)
{
}
