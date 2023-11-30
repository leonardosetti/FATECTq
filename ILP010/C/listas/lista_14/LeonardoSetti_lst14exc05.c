// Remake

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100
#define FILENAME "ls14e05motoristas.dados"

const char
    *sym_check = "\u2714",
    *g_block = "\u2591",
    *w_block1 = "\u2588",
    *sym_arrow = "\u27F9",
    *sym_save = "\uFB1A",
    *sym_0 = "\u24FF",
    *sym_1 = "\u278A",
    *sym_2 = "\u278B",
    *sym_3 = "\u278C",
    *sym_4 = "\u278D",
    *sym_5 = "\u278E",
    *sym_6 = "\u278F",
    *sym_7 = "\u2790",
    *sym_8 = "\u2791",
    *sym_9 = "\u2792",
    *sym_erro = "\u2716",
    *sym_bye = "\uFC0C",
    *sym_bck = "\u2B6F",
    *sym_question = "\uFC89",
    *sym_edit = "\uFAB6",
    *sym_off = "\u23FB",
    *menu_idc = "\u21F2",
    *sym_del = "\uFAE7",
    *sym_Ldel = "\uFB12",
    *sym_cad = "\uFAD1",
    *sym_id = "\uFBC9",
    *sym_sort = "\uFBC6",
    *sym_list = "\uFB18",
    *sym_Wfile = "\uFC50";

FILE *arq;

struct motorista
{
     int id ;
     char nome[50];
     char sexo[50];
     int nhabilitacao;
     char validade[50];
     int idade;
     int e;
};

struct motorista motoristas[TAM];

int menu();
void cadastrarmotoristas();
void consultarTodos();
void consultarmotoristas();
void alterar();
void excluirLogicamente();
void listarApagados();
void ordenarIdade(int n);
void subConsultas();

int main()
{
    return menu();
}

int menu()
{
    int opc;
    do
    {
        system("cls");
        printf("\n 1. Cadastrar");
        printf("\n 2. Consultar");
        printf("\n 3. Alterar");
        printf("\n 4. Excluir");
        printf("\n 5. Listar Todos os registros excluidos logicamente");
        printf("\n 6. Listar Todos os motoristas");
        printf("\n 9. Finalizar");
        printf("\n ");

        printf("\n Informe a opcao desejada: ");
        setbuf(stdin, NULL);
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            cadastrarmotoristas();
            break;
        case 2:
            //
            subConsultas();
            break;
        case 3:
            alterar();
            break;
        case 4:
            excluirLogicamente();
            break;
        case 5:
            listarApagados();
            break;
        case 6:
            listarPelaIdade();
            break;
        default:
            break;
        }

    } while (opc != 9);
    return opc;
}

void subConsultas()
{
    int opc = 1;
    do
    {
        system("cls");
        printf("\n 1. Todos");
        printf("\n 2. Individual");
        printf("\n 9. Voltar");

        printf("\n Informe a opcao desejada: ");
        setbuf(stdin, NULL);
        scanf("%d", &opc);

        if (opc == 1)
            consultarTodos();
        if (opc == 2)
            consultarmotoristas();

    } while (opc != 9);
}

void cadastrarmotoristas()
{
    int finalizar = 0;
    struct motorista ficha;
    system("cls");
    if ((arq = fopen(FILENAME, "rb+")) == NULL)
    {
        if ((arq = fopen(FILENAME, "wb")) == NULL)
        {
            printf("\n Erro");
            return 1;
        }
    }

    do
    {
        //
        printf("\nInforme o id: ");
        setbuf(stdin, NULL);
        scanf("%d", &ficha.id);
        printf("\nInforme o nome : ");
        setbuf(stdin, NULL);
        scanf("%[^\n]", ficha.nome);
        printf("\nInforme o sexo: ");
        setbuf(stdin, NULL);
        scanf("%[^\n]", ficha.sexo);
        printf("\nInforme o numero da  habilitação: ");
        setbuf(stdin, NULL);
        scanf("%d", &ficha.nhabilitacao);
        printf("\nInforme a validade da habilitação: ");
        setbuf(stdin, NULL);
        scanf("%[^\n]", &ficha.validade);
        printf("\nInforme a idade do motorista: ");
        setbuf(stdin, NULL);
        scanf("%d", &ficha.idade);

        //
        ficha.e = 0;
        fseek(arq, 0, 2);
        fwrite(&ficha, sizeof(ficha), 1, arq);
        //
        printf("\n Deseja incluir outro registro? \n Pressione [9] para voltar, outra tecla para continuar..");
        scanf("%d", &finalizar);
    } while (finalizar != 9);
    fclose(arq);
}

void consultarTodos()
{
    int i;
    struct motorista ficha;
    system("cls");
    printf("\n Lista de todos os motoristas");
    printf("\n");
if ((arq = fopen(FILENAME, "rb")) == NULL)
    {
        printf("\n Erro");
        return 0;
    }
    while (fread(&ficha, sizeof(ficha), 1, arq))
    {
        if (ficha.e == 0)
        {
            printf("\n %4d | %s | %s | %d | %s | %d ", ficha.id, ficha.nome, ficha.sexo, ficha.nhabilitacao, ficha.validade, ficha.idade);
        }
    }

    fclose(arq);
    printf("\n Tecle qualquer tecla para finalizar ...");
    setbuf(stdin, NULL);
    getchar();

}



void consultarmotoristas()
{
    struct motorista ficha;
    char nome[50];
    system("cls");
    printf("\n Consulta por nome");
    printf("\n");
    if ((arq = fopen(FILENAME, "rb")) == NULL)
    {
        printf("\n Erro");
        return 0;
    }
    printf("\n Informe o nome :");
    setbuf(stdin, NULL);
    scanf("%[^\n]", nome);

    int i = 0;
    while (fread(&ficha, sizeof(ficha), 1, arq))
    {
        if (ficha.e == 0)
        {
            if (strcmp(nome, ficha.nome) == 0)
            {
                printf("\n Codigo.......: %d", ficha.id);
                printf("\n Nome.........: %s", ficha.nome);
                printf("\n Sexo: %s", ficha.sexo);
                printf("\n Numero da habilitação: %d", ficha.nhabilitacao);
                printf("\n Validade da habilitação........: %s", ficha.validade);
                printf("\n Idade........: %d", ficha.idade);
                i = 1;
                break;
            }
        }
    }
    fclose(arq);
    if (i == 0)
    {
        printf("\n Falha, busca nao localizou o nome ");
    }
    printf("\n");
    printf("\n Tecle qualquer tecla para finalizar ...");
    getchar();
}

void alterar()
{
    int achou, confirmacao;
    struct motorista ficha;
    char nome[50];
    system("cls");
    printf("\n Alterar Registro por nome");
    printf("\n");
    if ((arq = fopen(FILENAME, "rb+")) == NULL)
    {
        printf("\n Erro");
        return 0;
    }
    printf("\n Informe o nome :");
    setbuf(stdin, NULL);
    scanf("%[^\n]", nome);
    achou = 0;
    while (fread(&ficha, sizeof(ficha), 1, arq))
    {

        if ((ficha.e == 0) && (strcmp(nome, ficha.nome) == 0))
        {

            fseek(arq, ftell(arq) - sizeof(ficha), 0);

            printf("\nInforme o id : [ %d ] ", ficha.id);
            scanf("%d", &ficha.id);
            printf("\nInforme o nome [ %s ]: ", ficha.nome);
            setbuf(stdin, NULL);
            scanf("%[^\n]", ficha.nome);
            printf("\nInforme o sexo [ %s ]: ", ficha.sexo);
            setbuf(stdin, NULL);
            scanf("%[^\n]", &ficha.sexo);
            printf("\nInforme o numero da habilitação do motorista[ %d ]: ", ficha.nhabilitacao);
            setbuf(stdin, NULL);
            scanf("%d", &ficha.nhabilitacao);
            printf("\nInforme a validade da habilitação [ %s ]: ", ficha.validade);
            setbuf(stdin, NULL);
            scanf("%[^\n]", ficha.validade);
            printf("\nInforme a idade do motorista [ %d ]: ", ficha.idade);
            setbuf(stdin, NULL);
            scanf("%d", &ficha.idade);

            printf("\n\n Deseja alterar a ficha? \n Pressione [1] para SIM e outra tecla para cancelar ...");
            scanf("%d", &confirmacao);
            if (confirmacao == 1)
            {
                fwrite(&ficha, sizeof(ficha), 1, arq);
            }
            fseek(arq, 0, 2);
            achou = 1;
        }
    }
    fclose(arq);
    if (achou == 0)
    {
        printf("\n Falha, busca nao localizou o nome ");
        printf("\n");
        printf("\n Tecle qualquer tecla para finalizar ...");
        getchar();
    }
}

void excluirLogicamente()
{
    int achou, confirmacao;
    struct motorista ficha;
    char nome[50];
    system("cls");
    printf("\n Exclusao Registro por nome");
    printf("\n");
    if ((arq = fopen(FILENAME, "rb+")) == NULL)
    {
        printf("\n Erro");
        return 0;
    }
    printf("\n Informe o nome :");
    setbuf(stdin, NULL);
    scanf("%[^\n]", nome);

    achou = 0;
    while (fread(&ficha, sizeof(ficha), 1, arq))
    {
        if (ficha.e == 0)
        {
            if (strcmp(nome, ficha.nome) == 0)
            {
                fseek(arq, ftell(arq) - sizeof(ficha), 0);
                printf("\n Codigo.......: %d", ficha.id);
                printf("\n Nome.........: %s", ficha.nome);
                printf("\n Sexo: %s", ficha.sexo);
                printf("\n Numero da habilitação: %d", ficha.nhabilitacao);
                printf("\n Validade da habilitação........: %s", ficha.validade);
                printf("\n Idade........: %d", ficha.idade);
                printf("\n\n Deseja excluir a ficha? \n Pressione [1] para SIM e outra tecla para cancelar ...");
                scanf("%d", &confirmacao);
                if (confirmacao == 1)
                {
                    ficha.e = 1;
                    fwrite(&ficha, sizeof(ficha), 1, arq);
                }
                fseek(arq, 0, 2);
                achou = 1;
            }
        }
    }
    fclose(arq);
    if (achou == 0)
    {
        printf("\n Falha, busca nao localizou o nome ");
        printf("\n");
        printf("\n Tecle qualquer tecla para finalizar ...");
        getchar();
    }
}

void listarApagados()
{
    int i, n;
    struct motorista ficha;
    system("cls");
    printf("\n Lista de Registros Apagados ");
    printf("\n");
    if ((arq = fopen(FILENAME, "rb")) == NULL)
    {
        printf("\n Erro");
        return 0;
    }
    i = 0;
    while (fread(&ficha, sizeof(ficha), 1, arq))
    {
        if (ficha.e == 1)
        {
            printf("\n %4d | %s | %s | %d | %s| %d ", ficha.id, ficha.nome, ficha.sexo, ficha.nhabilitacao, ficha.validade, ficha.idade);
            i++;
        }
    }
    fclose(arq);
    printf("\n Tecle qualquer tecla para finalizar ...");
    setbuf(stdin, NULL);
    getchar();
}

void listarPelaIdade()
{
    int i, n;
    struct motorista ficha;
    system("cls");
    printf("\n Lista de Todos os Motoristas");
    printf("\n");
    printf("\n Por Idade: \n");

    if ((arq = fopen(FILENAME, "rb")) == NULL)
    {
        printf("\n Erro");
        return 0;
    }

    i = 0;
    while (fread(&ficha, sizeof(ficha), 1, arq))
    {
        motoristas[i] = ficha;
        i++;
    }

    fclose(arq);

    ordenarIdade(i);

    printf("\n");
    printf("\n Ficha digitada");
    for (n = 0; n < i; n++)
    {
                printf("\n Codigo.......: %d", ficha.id);
                printf("\n Nome.........: %s", ficha.nome);
                printf("\n Sexo: %s", ficha.sexo);
                printf("\n Numero da habilitação: %d", ficha.nhabilitacao);
                printf("\n Validade da habilitação........: %s", ficha.validade);
                printf("\n Idade........: %d", ficha.idade);

        printf("\n-----------------------------------------------------\n");
    }
    printf("\n Tecle qualquer tecla para finalizar ...");
    setbuf(stdin, NULL);
    getchar();
}

void ordenarIdade(int n)
{

    int i, j;
    struct motorista aux;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (motoristas[i].idade > motoristas[j].idade)
            {
                aux = motoristas[i];
                motoristas[i] = motoristas[j];
                motoristas[j] = aux;
            }
        }
    }
}
