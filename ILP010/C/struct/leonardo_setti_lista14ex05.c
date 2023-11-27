#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 100
#define FILENAME "motoristas.dados"

const char *sym_check = "\u2714", *g_block = "\u2591", *w_block1 = "\u2588", *sym_arrow = "\u27F9", *sym_save = "\uFB1A", *sym_0 = "\u24FF", *sym_1 = "\u278A", *sym_2 = "\u278B", *sym_3 = "\u278C", *sym_4 = "\u278D", *sym_5 = "\u278E", *sym_6 = "\u278F", *sym_7 = "\u2790", *sym_8 = "\u2791", *sym_9 = "\u2792", *sym_erro = "\u2716", *sym_bye = "\uFC0C", *sym_bck = "\u2B6F", *sym_question = "\uFC89", *sym_edit = "\uFAB6", *sym_off = "\u23FB", *menu_idc = "\u21F2", *sym_del = "\uFAE7", *sym_Ldel = "\uFB12", *sym_cad = "\uFAD1", *sym_id = "\uFBC9", *sym_sort = "\uFBC6", *sym_list = "\uFB18", *sym_Wfile = "\uFC50";

struct motorista
{
    int id;
    char nome[50];
    char sexo[2];
    char cnh[11];
    char validade[10];
    int idade;
    int state;
};

struct motorista lista[TAM];
FILE *datafile; // alocação em memória para manipulação de arquivo (global)

void pt_br()
{
    setlocale(LC_ALL, "Portuguese");
}

void clearScreen() // proc limpa tela
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void clearBuffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
    if (c == '\n')
        ungetc('\n', stdin);
}

void menuTopBar()
{
    for (int i = 0; i < 79; i++)
    {
        printf("%s", w_block1);
    }
    printf("%s\n", w_block1);
}

void moduleTopBar()
{
    for (int i = 0; i < 79; i++)
    {
        printf("%s", g_block);
    }
    printf("%s\n", g_block);
}


int menuPrincipal();
int subMenuConsulta();
void clearBuffer(void);
int modCadMotorista();
void modConsultaMotorista();

int main()
{
    pt_br();
    clearScreen();
    return menuPrincipal();
}

int menuPrincipal()
{
    int selectMenu = 0;
    do
    {
        clearScreen();
        // clearScreen(); // remover comentário apó implementar funções
        menuTopBar();
        printf("\n              %s MENU PRINCIPAL \n\n", menu_idc);
        printf("\n              %s CADASTRAR....................................... %s ", sym_1, sym_save);
        printf("\n              %s CONSULTAR....................................... %s ", sym_2, sym_list);
        printf("\n              %s ALTERAR......................................... %s ", sym_3, sym_edit);
        printf("\n              %s EXCLUIR (LOGICAMENTE)........................... %s ", sym_4, sym_del);
        printf("\n              %s LISTAR TODOS EXCLUÍDOS LOGICAMENTE.............. %s ", sym_5, sym_Ldel);
        printf("\n              %s LISTAR TODOS OS MOTORISTAS (ORDENADOS POR IDADE) %s ", sym_6, sym_sort);
        printf("\n              %s SAIR:........................................... %s ", sym_0, sym_off);
        printf("\n              %s  ", sym_question);

        scanf("%d", &selectMenu);

        switch (selectMenu)
        {
        case 1:
            modCadMotorista();
            break;
        case 2:
            subMenuConsulta();
            break;
        case 3:
            printf("\n              %s%s   Módulo %s ALTERAR %s\n", menu_idc, sym_arrow, sym_3, sym_edit);
            break;
        case 4:
            printf("\n              %s%s   Módulo %s EXCLUIR (LOGICAMENTE) %s\n", menu_idc, sym_arrow, sym_4, sym_del);
            break;
        case 5:
            printf("\n              %s%s   Módulo %s LISTAR TODOS EXCLUÍDOS (LOGICAMENTE) %s\n", menu_idc, sym_arrow, sym_5, sym_Ldel);
            break;
        case 6:
            printf("\n              %s%s   Módulo %s LISTAR TODOS OS MOTORISTAS  (ORDENADOS POR IDADE) %s\n", menu_idc, sym_arrow, sym_6, sym_sort);
            break;
        case 0:
            printf("\n              %s Saindo %s\n\n\n", sym_check, sym_bye);
            break;
        default:
            printf("\n              %s Opção inválida\n", sym_erro);
            break;
        }
    } while (selectMenu != 0);
    return selectMenu;
}

int subMenuConsulta()
{
    int selectSubMenuConsulta = 0;

    do
    {
        // clearScreen(); // remover comentário apó implementar funções
        menuTopBar();
        printf("\n              %s MENU CONSULTA \n\n", menu_idc);
        printf("\n              %s TODOS..... %s ", sym_1, sym_list);
        printf("\n              %s INDIVIDUAL %s ", sym_2, sym_id);
        printf("\n              %s VOLTAR..%s \n", sym_0, sym_bck);
        printf("\n              %s  ", sym_question);

        scanf("%d", &selectSubMenuConsulta);

        switch (selectSubMenuConsulta)
        {
        case 1:
            printf("\n              %s%s   Módulo %s TODOS %s\n", menu_idc, sym_arrow, sym_1, sym_list);
            modConsultaMotorista();

            break;
        case 2:
            printf("\n              %s%s   Módulo %s INDIVIDUAL %s\n", menu_idc, sym_arrow, sym_2, sym_id);
            // Incluir esta lina na função correspondente
            // Definir função para esta opção
            break;
        case 0:
            printf("\n              %s   De volta ao MENU PRINCIPAL %s\n\n", sym_bck, sym_check);
            break;
        default:
            printf("\n              %s Opção inválida\n", sym_erro);
            break;
        }
    } while (selectSubMenuConsulta != 0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// ... (seções anteriores do código)

int modCadMotorista()
{
    int finalizar = -1;
    struct motorista registro;

    if ((datafile = fopen(FILENAME, "rb+")) == NULL)
    {
        if ((datafile = fopen(FILENAME, "wb")) == NULL)
        {
            printf("\n              %s ERRO\n", sym_erro);
            printf("\n              %s Não foi possível abrir o arquivo \n", sym_del);
            return (1);
        }
    }

    do
    {
        clearScreen();
        moduleTopBar();
        printf("\n              %s  %s   Módulo %s CADASTRAR %s\n\n", menu_idc, sym_arrow, sym_1, sym_save);
        printf("\n              %s  Preencha os campos para cadastro de Motorista \n\n", sym_cad);

        clearBuffer();
        printf("              %s Código ID: ", sym_Wfile);
        scanf("%d", &registro.id);
        clearBuffer();

        printf("              %s Nome Motorista: ", sym_Wfile);
        fgets(registro.nome, sizeof(registro.nome), stdin);
        registro.nome[strcspn(registro.nome, "\n")] = '\0';
        clearBuffer();

        printf("              %s Idade Motorista: ", sym_Wfile);
        scanf("%d", &registro.idade);
        clearBuffer();

        printf("              %s Sexo Motorista (M/F): ", sym_Wfile);
        fgets(registro.sexo, sizeof(registro.sexo), stdin);
        registro.sexo[strcspn(registro.sexo, "\n")] = '\0';
        clearBuffer();

        printf("              %s CNH Motorista: ", sym_Wfile);
        fgets(registro.cnh, sizeof(registro.cnh), stdin);
        registro.cnh[strcspn(registro.cnh, "\n")] = '\0';
        clearBuffer();

        printf("              %s Validade CNH: ", sym_Wfile);
        fgets(registro.validade, sizeof(registro.validade), stdin);
        registro.validade[strcspn(registro.validade, "\n")] = '\0';
        clearBuffer();

        registro.state = 0;

        clearScreen();

        moduleTopBar();
        printf("\n              %d              %s              %s   %s CADASTRADO!\n", registro.id, registro.nome, sym_arrow, sym_save);

        fseek(datafile, 0, 2);
        fwrite(&registro, sizeof(registro), 1, datafile);

        printf("\n              %s Deseja encerrar o cadastro", sym_question);
        printf("\n              %s Digite %s para sair       ", sym_off, sym_0);
        printf("\n              %s Digite %s para continuar  ", sym_sort, sym_1);

        scanf("%d", &finalizar);
        getchar();

    } while (finalizar != 0);

    fclose(datafile);
    return (1);
}

void modConsultaMotorista()
{
    struct motorista registro;
    clearScreen();

    if ((datafile = fopen(FILENAME, "rb")) == NULL)
    {
        printf("\n              %s ERRO\n", sym_erro);
        printf("\n              %s Não foi possível abrir o arquivo ou o arquivo não existe\n\n\n", sym_Ldel);
        exit(EXIT_FAILURE);
    }

    clearScreen();
    moduleTopBar();
    printf("\n              %s  %s   Módulo %s  CONSULTAR TODOS %s\n\n", menu_idc, sym_arrow, sym_2, sym_list);

    while (fread(&registro, sizeof(registro), 1, datafile))
    {
        if (registro.state == 0)
        {
            printf("\n              %s %4d | %15s | %1s | %2d | %11s | %10s | %s ", sym_id, registro.id, registro.nome, registro.sexo, registro.idade, registro.cnh, registro.validade, sym_check);
        }
    }

    fclose(datafile);
    moduleTopBar();
    printf("\n              %s   LISTA CARREGADA COM SUCESSO %s %s\n\n", sym_arrow, sym_list, sym_sort);
    getchar();
}
