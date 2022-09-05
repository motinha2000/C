/*Arquivo que carrega as funções do arquivo cabeçalho.*/
#include <stdio.h>  //biblioteca base de entrada e saida
#include "biblio.h" //adição do cabelho
#include <string.h> //adição da biblioteca de strings para usar o strcmp
#include <math.h> //adição da biblioteca de funções matemáticas
#include <stdlib.h> //adição da biblioteca para uso da função free

// FUNÇÕES BASE:

void leitura(Escaninho *pessoa) // cadastro
{
    for (int i = 0; i < 12; i++) // local na memória está salvo?FAZER VARREDURA!
    {
        if (pessoa[i].localizacao == 999)
        {
            printf("\nID: ");
            scanf("%d", &pessoa[i].id);
            printf("\nEscolha o Tipo volume pelo numero: 1- Bolsa pequena, 2-Bolsa Grande, 3-Mochila, 4-Sacola, 5-Caixa: ");
            scanf("\n%d", &pessoa[i].tipvol);
            printf("\nInforme o CPF do acompanhante: ");
            scanf("%s", pessoa[i].cpfacomp);
            printf("\nInforme o CPF do paciente: ");
            scanf("%s", pessoa[i].cpfpaci);
            printf("\nUsuario Cadastrado com sucesso!\n");
            pessoa[i].localizacao = i;
            printf("\nLocalizacao atual: %d!", i);
            printf("\nProxima localizacao: %d!", i + 1);
            break;
        }
    }
}

void menu(Escaninho *pessoa)
{
    int op = 0;

    printf("\n_______________________________________________________________\n");
    printf("|                Seja Bem-Vindo!                              |\n");
    printf("|                                                             |\n");
    printf("|    1 - Entrada de volume no escaninho.                      |\n"); // Cadastro PRONTO.
    printf("|    2 - Busca de volumes por CPF do acompanhante.            |\n"); // busca por cpf do acompanhante //PRONTO
    printf("|    3 - Busca de volumes por CPF do paciente.                |\n"); // busca por cpf do paciente //
    printf("|    4 - Volumes armazenados atualmente.                      |\n"); // imprimir dados do paciente e do acompanahnte e a localização no escaninho //PRONTO
    printf("|    5 - Quantidade de volumes de acordo com o tipo.          |\n"); // busca por tipvol //PRONTO
    printf("|    6 - Volume armazenado em uma determinada localizacao.    |\n"); // imprimir o tipo do volume na determinada localização fornecida //PRONTO
    printf("|    7 - Sair do programa.                                    |\n");
    printf("|____________________________________Digite a opcao desejada--> ");
    scanf("%d", &op);

    do
    {
        switch (op)
        {
        case 1:
            leitura(pessoa);
            break; // chamada da função para cadastro de pessoa.
        case 2:
            buscacpfacomp(pessoa);
            break; // busca de volumes por cpf do acompanhante.
        case 3:
            buscacpfpaci(pessoa);
            break; // busca de volumes por cpf do paciente.
        case 4:
            volumetotal(pessoa);
            break; // relatório dos volumes totais contendo: cpfpaci, cpfacomp e localizacao.
        case 5:
            volumeportipo(pessoa); // relatório de cadastros preenchidos totais no sistema.
            break;
        case 6:
            volumeporlocali(pessoa); // volume guardado em uma localização especifíca.
            break;
        case 7:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpcao inexistente\n");
            break;
        }

        if (op != 7)
        {
            printf("\n_______________________________________________________________\n");
            printf("|                                                             |\n");
            printf("|    1 - Entrada de volume no escaninho.                      |\n"); // Cadastro PRONTO.
            printf("|    2 - Busca de volumes por CPF do acompanhante.            |\n"); // busca por cpf do acompanhante
            printf("|    3 - Busca de volumes por CPF do paciente.                |\n"); // busca por cpf do paciente
            printf("|    4 - Volumes armazenados atualmente.                      |\n"); // imprimir dados do paciente e do acompanahnte e a localização no escaninho //PRONTO
            printf("|    5 - Quantidade de volumes de acordo com o tipo.          |\n"); // busca por tipvol //PRONTO
            printf("|    6 - Volume armazenado em uma determinada localizacao.    |\n"); // imprimir o tipo do volume na determinada localização fornecida //PRONTO
            printf("|    7 - Sair do programa.                                    |\n");
            printf("|____________________________________Digite a opcao desejada--> ");
            scanf("%d", &op);
        }

    } while (op != 7);
}

// ALGORITMOS DE BUSCA ABAIXO:

void buscacpfacomp(Escaninho *pessoa)
{   
    mergeSort(pessoa,0,12);
    Escaninho aux;
    printf("\nInforme o CPF do acompanhante: ");
    scanf("%s", aux.cpfacomp);


    for (int i = 0; i < 12; i++)
    {
        if (strcmp(pessoa[i].cpfacomp, aux.cpfacomp) == 0)
        {
            switch (pessoa[i].tipvol)
            {
            case 1:
                printf("\nVinculado na posicao %d com uma BOLSA PEQUENA.", pessoa[i].localizacao + 1);
                break;
            case 2:
                printf("\nVinculado na posicao %d com uma BOLSA GRANDE.", pessoa[i].localizacao + 1);
                break;
            case 3:
                printf("\nVinculado na posicao %d com uma MOCHILA.", pessoa[i].localizacao + 1);
                break;
            case 4:
                printf("\nVinculado na posicao %d com uma SACOLA.", pessoa[i].localizacao + 1);
                break;
            case 5:
                printf("\nVinculado na posicao %d com uma CAIXA.", pessoa[i].localizacao + 1);
                break;
            default:
                printf("\nOpcao de volume inexistente!");
                break;
            }
            break;
        }
    }
}

void buscacpfpaci(Escaninho *pessoa)
{
    Escaninho aux;
    printf("\nInforme o CPF do paciente: ");
    scanf("%s", aux.cpfpaci);

    for (int i = 0; i < 12; i++)
    {
        if (strcmp(pessoa[i].cpfpaci, aux.cpfpaci) == 0)
        {
            switch (pessoa[i].tipvol)
            {
            case 1:
                printf("\nVinculado na posicao %d com uma BOLSA PEQUENA.", pessoa[i].localizacao + 1);
                break;
            case 2:
                printf("\nVinculado na posicao %d com uma BOLSA GRANDE.", pessoa[i].localizacao + 1);
                break;
            case 3:
                printf("\nVinculado na posicao %d com uma MOCHILA.", pessoa[i].localizacao + 1);
                break;
            case 4:
                printf("\nVinculado na posicao %d com uma SACOLA.", pessoa[i].localizacao + 1);
                break;
            case 5:
                printf("\nVinculado na posicao %d com uma CAIXA.", pessoa[i].localizacao + 1);
                break;
            default:
                printf("\nOpcao de volume inexistente!");
                break;
            }
            break;
        }
    }
}

// RELATÓRIOS ABAIXO:

void volumetotal(Escaninho *pessoa)
{
    bubblesort(pessoa);
    for (int i = 0; i < 12; i++)
    {
        if (pessoa[i].localizacao != 999)
        {
            printf("\n====================================");
            printf("\nCadastro encontrado!");
            printf("\nCPF do PACIENTE: %s", pessoa[i].cpfpaci);
            printf("\nCPF do ACOMPANHANTE: %s", pessoa[i].cpfacomp);
            printf("\nLOCALIZACAO: %d", pessoa[i].localizacao + 1);
            printf("\n====================================");
        }
    }
}
void volumeportipo(Escaninho *pessoa)
{
    bubblesort(pessoa);
    int c = 0, op = 0;
    printf("\nEscolha o tipo de volume a ser procurado pelo numero: 1- Bolsa pequena, 2-Bolsa Grande, 3-Mochila, 4-Sacola, 5-Caixa: ");
    scanf("%d", &op);

    for (int i = 0; i < 12; i++)
    {
        if (op == pessoa[i].tipvol)
        {
            c++;
        }
    }
    printf("\nVolumes encontrados: %d.", c);
}
void volumeporlocali(Escaninho *pessoa) // PRONTO
{
    bubblesort(pessoa);
    int op = 0;

    printf("\nInforme o compartimento do escaninho que deseja olhar(1 a 12): ");
    scanf("%d", &op);
    for (int i = 0; i < 12; i++)
    { // 1- Bolsa pequena, 2-Bolsa Grande, 3-Mochila, 4-Sacola, 5-Caixa:
        if (pessoa[i].localizacao == (op - 1))
        {
            switch (pessoa[i].tipvol)
            {
            case 1:
                printf("\nNa posicao %d tem uma BOLSA PEQUENA.", pessoa[i].localizacao + 1);
                break;
            case 2:
                printf("\nNa posicao %d tem uma BOLSA GRANDE.", pessoa[i].localizacao + 1);
                break;
            case 3:
                printf("\nNa posicao %d tem uma MOCHILA.", pessoa[i].localizacao + 1);
                break;
            case 4:
                printf("\nNa posicao %d tem uma SACOLA.", pessoa[i].localizacao + 1);
                break;
            case 5:
                printf("\nNa posicao %d tem uma CAIXA.", pessoa[i].localizacao + 1);
                break;
            default:
                printf("\nOpcao de volume inexistente!");
                break;
            }
            break;
        }
    }
}
// ALGORITMOS DE ORDENAÇÂO ABAIXO:

void bubblesort(Escaninho *pessoa)
{
    Escaninho aux, l;
    for (int i = 0; i < 12 - 1; i++) // 6
    {
        for (int j = i + 1; j < 12; j++)
        {
            if (pessoa[i].id > pessoa[j].id)
            {
                aux = pessoa[i];
                pessoa[i] = pessoa[j];
                pessoa[j] = aux;
            }
        }
    }
}

void mergeSort(Escaninho *pessoa, int inicio, int fim)
{
    int meio;
    if (inicio < fim)
    {
        meio = floor((inicio + fim) / 2);
        mergeSort(pessoa, inicio, meio);
        mergeSort(pessoa, meio + 1, fim);
        merge(pessoa, inicio, meio, fim);
    }
}

void merge(Escaninho *pessoa, int inicio, int meio, int fim)
{   
    Escaninho *temp;
    int p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;
    temp = malloc(tamanho * sizeof(Escaninho));
    if (temp != NULL)
    {
        for (i = 0; i < tamanho; i++)
        {
            if (!fim1 && !fim2)
            {
                if (pessoa[p1].id < pessoa[p2].id)
                    temp[i] = pessoa[p1++];
                else
                    temp[i] = pessoa[p2++];

                if (p1 > meio)
                    fim = 1;
                if (p2 > fim)
                    fim2 = 1;
            }
            else
            {
                if (!fim1)
                    temp[i] = pessoa[p1++];
                else
                    temp[i] = pessoa[p2++];
            }
        }
        for (j = 0, k = inicio; j < tamanho; j++, k++)
            pessoa[k] = temp[j];
    }
    free(temp);
}