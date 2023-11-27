// Programa destinado para trabalhar com arquivos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// constante
#define TAM 100
#define FILENAME "funcionarios.dados"

struct funcionario
{
    int id;              // indice dos registros
    char nome[50];       // nome completo do funcionario
    float salario;       // valor do salario
    char sexo[1];        // sexo do aluno
    char dtcontrato[10]; // data contratacao funcionario
    int e;               // controle de exclusao logica
};

struct funcionario lista[TAM];

// aloca espaco memoria, para manipular o arquivo
FILE *arq;

int menu();
int cadastrar();
void consultaSequencial();

int main()
{
    return menu();
}

int menu()
{
    int opc;
    opc = 0;
    do
    {
        system("cls");

        printf("\nMenu Funcionarios");
        printf("\n-------------------");
        printf("\n 1. Cadastrar");
        printf("\n 2. Consultar ( Sequencial)");
        printf("\n 3. Alterar  ");
        printf("\n 4. Exclusao Logica");
        printf("\n 5. Exclusao Fisica");
        printf("\n 6. Ordenacao ");
        printf("\n 7. Consulta ( Binaria)");
        printf("\n 9. Finalizar/sair");

        printf("\n\n Informe a opcao desejada : ");
        scanf("%d", &opc);
        if (opc == 1)
        {
            cadastrar();
        }
        if (opc == 2)
        {
            consultaSequencial();
        }

    } while (opc != 9);

    return (opc);
}

int cadastrar()
{
    int finalizar = 0;
    struct funcionario ficha;

    if ((arq = fopen(FILENAME, "rb+")) == NULL)
    {
        if ((arq = fopen(FILENAME, "wb")) == NULL)
        {
            printf("\n Erro");
            printf(" - nao foi possivel criar o arquivo!");
            return (1);
        }
    }

    do
    {
        system("cls");

        printf("\n ");
        printf("\n CADASTRO FUNCIONARIO");
        printf("\n -----------------------------------------");
        printf("\n ");
        printf("\ncodigo.: ");
        setbuf(stdin, NULL);
        scanf("%d", &ficha.id);

        printf("\nnome...: ");
        setbuf(stdin, NULL);
        scanf("%[^\n]", ficha.nome);

        printf("\nContratacao...: ");
        setbuf(stdin, NULL);
        scanf("%[^\n]", ficha.dtcontrato);

        printf("\nSalario....: ");
        setbuf(stdin, NULL);
        scanf("%d", &ficha.salario);

        // ficha.salario = 0 ;
        //  ficha.sexo = "" ;
        // ficha.dtcontrato = "01/01/1980";
        ficha.e = 0;

        printf("\n -----------------------------------------");
        printf("\n ");
        printf("\n%d -  %s", ficha.id, ficha.nome);
        // escrevendo informações no arquivo
        fseek(arq, 0, 2);
        fwrite(&ficha, sizeof(ficha), 1, arq);
        //
        printf("\n deseja para de cadastrar ? [ 9-sair ] outra tecla continuar: ");
        scanf("%d", &finalizar);
    } while (finalizar != 9);
    fclose(arq);
    return (1);
}

void consultaSequencial()
{

    struct funcionario ficha;

    system("cls");
    if ((arq = fopen(FILENAME, "rb")) == NULL)
    {
        printf("\n Erro");
        exit;
    }

    printf("\n ");
    printf("\n CONSULTA FUNCIONARIO");
    printf("\n -----------------------------------------");
    printf("\n ");

    while (fread(&ficha, sizeof(ficha), 1, arq))
    {
        if (ficha.e == 0)
        {
            printf("\n %4d | %s \t\t\t| %10s", ficha.id, ficha.nome, ficha.dtcontrato);
        }
    }

    fclose(arq);
    printf("\n ");
    printf("\n -----------------------------------------");
    printf("\n ");
    printf("\n lista de funcionarios, concluida com sucesso!");
    getchar();
}