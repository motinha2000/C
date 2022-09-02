/*Arquivo que carrega as funções do arquivo cabeçalho.*/
#include <stdio.h>  //biblioteca base de entrada e saida
#include "biblio.h" //adição do cabelho

// FUNÇÕES BASE:

void leitura(Escaninho *pessoa, vetor *localizacao) // cadastro
{   
    for(int i=0;i<12;i++)//local na memória está salvo?FAZER VARREDURA
    {
        if(i==0)
        {
            for (int i = 0; i < 12; i++)
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
            	}
        }
    }
}

void escrita(Escaninho *pessoa, vetor *localizacao)
{
    for (int i = 0; i < 12; i++)
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
        printf("\nlocalização: " );
        printf("\ncpf do acompanhante: %s", pessoa[i].cpfacomp);
        printf("\ncpf do paciente: %s", pessoa[i].cpfpaci);
    }
}

void menu(Escaninho *pessoa, vetor *localizacao)
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

void buscacpfacomp(Escaninho *pessoa, vetor *localizacao)
{
    Escaninho aux;
    bubblesort(pessoa, localizacao);
    printf("Informe o CPF do acompanhante, para busca de volumes: ");
    scanf("%s", aux.cpfacomp);

    for (int i = 0; i < 12; i++)
    {
    }
}

void buscacpfpaci(Escaninho *pessoa, vetor *localizacao)
{
}

// RELATÓRIOS ABAIXO:

void volumetotal(Escaninho *pessoa, vetor *localizacao)
{}
void volumeportipo(Escaninho *pessoa, vetor *localizacao)
{}
void volumeporlocali(Escaninho *pessoa, vetor *localizacao)
{}
// ALGORITMOS DE ORDENAÇÂO ABAIXO:

void bubblesort(Escaninho *pessoa, vetor *localizacao)
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

void mergesort(Escaninho *pessoa, vetor *localizacao)
{
}

void quicksort(Escaninho *pessoa, vetor *localizacao)
{
}
