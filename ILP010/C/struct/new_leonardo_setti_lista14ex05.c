// Remake

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 100
#define FILENAME "ls14e05motoristas.dados"

const char
    *sym_hbar = "\u2501",
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
    int id;
    char nome[50];
    char sexo[50];
    int cnh;
    char validade[50];
    int idade;
    int e;
};

struct motorista motoristas[TAM];

int menuPrincipal();
int cadMotorista();
void consultaGeral();
int consultaNome();
int alterarPorNome();
int excluirLogicamente();
int listarApagados();
int listarPelaIdade();
void ordenarIdade(int n);
void subMenuConsulta();

void pt_br()
{
    setlocale(LC_ALL, "Portuguese");
}

void clearScreen() // proc limpa tela
{
#ifdef _WIN32
    clearScreen();
#else
    system("clear");
#endif
}

void menuTopBar()
{
    for (int i = 0; i < TAM; i++)
    {
        printf("%s", w_block1);
    }
    printf("%s\n", w_block1);
}

void separadorHrzBar()
{
    for (int i = 0; i < TAM; i++)
    {
        printf("%s", sym_hbar);
    }
    printf("%s\n", sym_hbar);
}

void msgFalhaBusca()
{
    printf("\n            %s ERRO\n", sym_erro);
    printf("\n            %s Falha na busca por registro.\n", sym_Ldel);
    printf("\n            %s   Tecle qualquer tecla para retornar %s\n", sym_arrow, sym_bck);
    setbuf(stdin, NULL);
    getchar();
}

void msgFalhaArquivo()
{
    printf("\n            %s ERRO\n", sym_erro);
    printf("\n            %s Não foi possível abrir o arquivo ou o arquivo não existe\n\n\n", sym_Ldel);
    exit(EXIT_FAILURE);
}

msgRetornoMenu()
{
    printf("\n            %s   Tecle qualquer tecla para retornar %s\n", sym_arrow, sym_bck);
    moduleTopBar();
    printf("\n\n");
    setbuf(stdin, NULL);
    getchar();
}

void preencherDefault()
{
}

void moduleTopBar()
{
    for (int i = 0; i < TAM; i++)
    {
        printf("%s", g_block);
    }
    printf("%s\n", g_block);
}

int main()
{
    pt_br();
    // clearScreen();
    return menuPrincipal();
}

int menuPrincipal()
{
    int selectMenu = 0;
    do
    {
        // clearScreen();
        menuTopBar();
        printf("\n            %s MENU PRINCIPAL \n\n", menu_idc);
        printf("\n            %s CADASTRAR....................................... %s ", sym_1, sym_save);
        printf("\n            %s CONSULTAR....................................... %s ", sym_2, sym_list);
        printf("\n            %s ALTERAR......................................... %s ", sym_3, sym_edit);
        printf("\n            %s EXCLUIR (LOGICAMENTE)........................... %s ", sym_4, sym_del);
        printf("\n            %s LISTAR TODOS EXCLUÍDOS LOGICAMENTE.............. %s ", sym_5, sym_Ldel);
        printf("\n            %s LISTAR TODOS OS MotoristaS (ORDENADOS POR IDADE) %s ", sym_6, sym_sort);
        printf("\n            %s SAIR:........................................... %s ", sym_0, sym_off);
        printf("\n            %s  ", sym_question);

        setbuf(stdin, NULL);
        scanf("%d", &selectMenu);

        switch (selectMenu)
        {
        case 1:
            cadMotorista();
            break;
        case 2:
            //
            subMenuConsulta();
            break;
        case 3:
            alterarPorNome();
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
    } while (selectMenu != 0);
    return selectMenu;
}

void subMenuConsulta()
{
    int selectSubMenuConsulta = 0;

    do
    {
        // clearScreen();
        menuTopBar();
        printf("\n            %s MENU CONSULTA \n\n", menu_idc);
        printf("\n            %s TODOS..... %s ", sym_1, sym_list);
        printf("\n            %s INDIVIDUAL %s ", sym_2, sym_id);
        printf("\n            %s VOLTAR..%s \n", sym_0, sym_bck);
        printf("\n            %s  ", sym_question);

        setbuf(stdin, NULL);
        scanf("%d", &selectSubMenuConsulta);

        if (selectSubMenuConsulta == 1)
            consultaGeral();
        if (selectSubMenuConsulta == 2)
            consultaNome();
    } while (selectSubMenuConsulta != 0);
}

int cadMotorista()
{
    int finalizar = -1;
    struct motorista ficha;
    // clearScreen();
    if ((arq = fopen(FILENAME, "rb+")) == NULL)
    {
        if ((arq = fopen(FILENAME, "wb")) == NULL)
        {
            msgFalhaArquivo();
        }
    }

    do
    {
        // clearScreen();
        moduleTopBar();
        printf("\n            %s  %s   Módulo %s CADASTRAR %s\n\n", menu_idc, sym_arrow, sym_1, sym_save);

        printf("\n            %s  Preencha os campos de registro do Motorista \n\n", sym_cad);

        printf("              %s Código ID: ", sym_Wfile);
        setbuf(stdin, NULL);
        scanf("%d", &ficha.id);
        printf("              %s Nome Motorista: ", sym_Wfile);
        setbuf(stdin, NULL);
        scanf("%[^\n]", ficha.nome);
        printf("              %s Sexo Motorista (M/F): ", sym_Wfile);
        setbuf(stdin, NULL);
        scanf("%[^\n]", ficha.sexo);
        printf("              %s CNH Motorista: ", sym_Wfile);
        setbuf(stdin, NULL);
        scanf("%d", &ficha.cnh);
        printf("              %s Validade CNH: ", sym_Wfile);
        setbuf(stdin, NULL);
        scanf("%[^\n]", &ficha.validade);
        printf("              %s Idade Motorista: ", sym_Wfile);
        setbuf(stdin, NULL);
        scanf("%d", &ficha.idade);
        setbuf(stdin, NULL);

        ficha.e = 0;
        fseek(arq, 0, 2);
        fwrite(&ficha, sizeof(ficha), 1, arq);
        //
        printf("\n            %s Deseja encerrar o cadastro", sym_question);
        printf("\n            %s Digite %s para sair       ", sym_off, sym_0);
        printf("\n            %s Digite %s para continuar  ", sym_sort, sym_1);

        scanf("%d", &finalizar);

    } while (finalizar != 0);
    fclose(arq);
}

int alterarPorNome()
{
    int busca, confirmacao;
    struct motorista ficha;
    char nome[50];
    clearScreen();
    moduleTopBar();
    printf("\n            %s  %s   Módulo %s  ALTERAR POR NOME %s\n\n", menu_idc, sym_arrow, sym_2, sym_list);
    printf("\n");
    if ((arq = fopen(FILENAME, "rb+")) == NULL)
    {
        printf("\n Erro");
        return 0;
    }
    printf("              %s Nome do(a) Motorista: ", sym_question);
    setbuf(stdin, NULL);
    scanf("%[^\n]", nome);
    busca = 0;
    while (fread(&ficha, sizeof(ficha), 1, arq))
    {

        if ((ficha.e == 0) && (strcmp(nome, ficha.nome) == 0))
        {

            fseek(arq, ftell(arq) - sizeof(ficha), 0);

            moduleTopBar();
            printf("\n            %s  Preencha os campos para alterar registro de Motorista \n\n", sym_cad);

            printf("              %s Código ID: ", sym_Wfile);
            setbuf(stdin, NULL);
            scanf("%d", &ficha.id);
            printf("              %s Nome Motorista: ", sym_Wfile);
            setbuf(stdin, NULL);
            scanf("%[^\n]", ficha.nome);
            printf("              %s Sexo Motorista (M/F): ", sym_Wfile);
            setbuf(stdin, NULL);
            scanf("%[^\n]", ficha.sexo);
            printf("              %s CNH Motorista: ", sym_Wfile);
            setbuf(stdin, NULL);
            scanf("%d", &ficha.cnh);
            printf("              %s Validade CNH: ", sym_Wfile);
            setbuf(stdin, NULL);
            scanf("%[^\n]", &ficha.validade);
            printf("              %s Idade Motorista: ", sym_Wfile);
            setbuf(stdin, NULL);
            scanf("%d", &ficha.idade);

            printf("\n            %s  Deseja alterar este registro %s", sym_question);
            printf("\n            %s  Para continuar %s", sym_1);
            printf("\n            %s  Para cancelar  %s", sym_0);
            scanf("%d", &confirmacao);
            if (confirmacao == 1)
            {
                fwrite(&ficha, sizeof(ficha), 1, arq);
            }
            fseek(arq, 0, 2);
            busca = 1;
        }
    }
    fclose(arq);
    if (busca == 0)
    {
        printf("\n            %s ERRO\n", sym_erro);
        printf("\n            %s Falha na busca por registro.\n", sym_Ldel);
        printf("\n");
        printf("\n            %s   Tecle qualquer tecla para finalizar %s\n", sym_arrow, sym_off);
        setbuf(stdin, NULL);
        getchar();
    }
}

void consultaGeral()
{
    int i;
    struct motorista ficha;
    clearScreen();
    if ((arq = fopen(FILENAME, "rb")) == NULL)
    {
        msgFalhaArquivo();
    }

    // clearScreen();
    moduleTopBar();
    printf("\n            %s  %s   Módulo %s  CONSULTAR TODOS %s\n\n", menu_idc, sym_arrow, sym_2, sym_list);
    printf("\n             %s %s  ID |               NOME             | SEXO  |      CNH      |  VÁLIDA ATÉ  | IDADE %s", w_block1, sym_check, w_block1);

    while (fread(&ficha, sizeof(ficha), 1, arq))
    {
        if (ficha.e == 0)
        {
            printf("\n             %s %-5d | %-30s | %-5s | %-13d | %-12s | %-5d %-s", w_block1, ficha.id, ficha.nome, ficha.sexo, ficha.cnh, ficha.validade, ficha.idade, w_block1);
        }
    }

    fclose(arq);
    printf("\n\n            %s   LISTA CARREGADA COM SUCESSO       %s %s", sym_arrow, sym_list, sym_sort);
    printf("\n            %s   Tecle qualquer tecla para finalizar %s\n", sym_arrow, sym_off);
    moduleTopBar();
    printf("\n\n");
    setbuf(stdin, NULL);
    getchar();
}

int consultaNome()
{
    struct motorista ficha;
    char nome[50];
    clearScreen();
    moduleTopBar();
    printf("\n            %s  %s   Módulo %s  CONSULTAR POR NOME %s\n\n", menu_idc, sym_arrow, sym_2, sym_list);

    if ((arq = fopen(FILENAME, "rb")) == NULL)
    {
        msgFalhaArquivo();
    }
    printf("              %s Nome do(a) Motorista: ", sym_question);
    setbuf(stdin, NULL);
    scanf("%[^\n]", nome);

    int i = 0;
    while (fread(&ficha, sizeof(ficha), 1, arq))
    {
        if (ficha.e == 0)
        {
            if (strcmp(nome, ficha.nome) == 0)
            {
                printf("              Código ID:            %s %d\n", sym_id, ficha.id);
                printf("              Nome Motorista:       %s %s\n", sym_check, ficha.nome);
                printf("              Sexo Motorista (M/F): %s %s\n", sym_check, ficha.sexo);
                printf("              CNH Motorista:        %s %d\n", sym_check, ficha.cnh);
                printf("              Validade CNH:         %s %s\n", sym_check, ficha.validade);
                printf("              Idade Motorista:      %s %d\n", sym_check, ficha.idade);
                i = 1;
                break;
            }
        }
    }
    fclose(arq);
    if (i == 0)
    {
        msgFalhaBusca();
    }
    msgRetornoMenu();
}

int excluirLogicamente()
{
    int busca, confirmacao;
    struct motorista ficha;
    char nome[50];
    clearScreen();
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

    busca = 0;
    while (fread(&ficha, sizeof(ficha), 1, arq))
    {
        if (ficha.e == 0)
        {
            if (strcmp(nome, ficha.nome) == 0)
            {
                fseek(arq, ftell(arq) - sizeof(ficha), 0);
                printf("              Código ID:            %s %d\n", sym_id, ficha.id);
                printf("              Nome Motorista:       %s %s\n", sym_check, ficha.nome);
                printf("              Sexo Motorista (M/F): %s %s\n", sym_check, ficha.sexo);
                printf("              CNH Motorista:        %s %d\n", sym_check, ficha.cnh);
                printf("              Validade CNH:         %s %s\n", sym_check, ficha.validade);
                printf("              Idade Motorista:      %s %d\n", sym_check, ficha.idade);
                printf("\n\n Deseja excluir a ficha? \n Pressione [1] para SIM e outra tecla para cancelar ...");
                scanf("%d", &confirmacao);
                if (confirmacao == 1)
                {
                    ficha.e = 1;
                    fwrite(&ficha, sizeof(ficha), 1, arq);
                }
                fseek(arq, 0, 2);
                busca = 1;
            }
        }
    }
    fclose(arq);
    if (busca == 0)
    {
        msgFalhaBusca();
    }
}

int listarApagados()
{
    int i, n;
    struct motorista ficha;
    clearScreen();
    moduleTopBar();
    printf("\n            %s  %s   Módulo %s  CONSULTAR EXCLUÍDOS %s\n\n", menu_idc, sym_arrow, sym_2, sym_list);

    if ((arq = fopen(FILENAME, "rb")) == NULL)
    {
        msgFalhaArquivo();
    }
    i = 0;
    while (fread(&ficha, sizeof(ficha), 1, arq))
    {
        if (ficha.e == 1)
        {
            printf("\n              Código ID:            %s %d\n", sym_id, ficha.id);
            printf("              Nome Motorista:       %s %s\n", sym_check, ficha.nome);
            printf("              Sexo Motorista (M/F): %s %s\n", sym_check, ficha.sexo);
            printf("              CNH Motorista:        %s %d\n", sym_check, ficha.cnh);
            printf("              Validade CNH:         %s %s\n", sym_check, ficha.validade);
            printf("              Idade Motorista:      %s %d\n", sym_check, ficha.idade);
            i++;
        }
    }
    fclose(arq);
    msgRetornoMenu();
}

int listarPelaIdade()
{
    int i, n;
    struct motorista ficha;
    clearScreen();
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
        printf("\n              Código ID:            %s %d\n", sym_id, ficha.id);
        printf("              Nome Motorista:       %s %s\n", sym_check, ficha.nome);
        printf("              Sexo Motorista (M/F): %s %s\n", sym_check, ficha.sexo);
        printf("              CNH Motorista:        %s %d\n", sym_check, ficha.cnh);
        printf("              Validade CNH:         %s %s\n", sym_check, ficha.validade);
        printf("              Idade Motorista:      %s %d\n", sym_check, ficha.idade);

        separadorHrzBar();
    }
    msgRetornoMenu();
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
