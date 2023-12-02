#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 100
#define FILENAME "motoristas.dados"

const char *sym_check = "\u2714", *g_block = "\u2591", *w_block1 = "\u2588", *sym_arrow = "\u27F9", *sym_save = "\uFB1A", *sym_0 = "\u24FF", *sym_1 = "\u278A", *sym_2 = "\u278B", *sym_3 = "\u278C", *sym_4 = "\u278D", *sym_5 = "\u278E", *sym_6 = "\u278F", *sym_7 = "\u2790", *sym_8 = "\u2791", *sym_9 = "\u2792", *sym_erro = "\u2716", *sym_bye = "\uFC0C", *sym_bck = "\u2B6F", *sym_question = "\uFC89", *sym_edit = "\uFAB6", *sym_off = "\u23FB", *menu_idc = "\u21F2", *sym_del = "\uFAE7", *sym_Ldel = "\uFB12", *sym_cad = "\uFAD1", *sym_id = "\uFBC9", *sym_sort = "\uFBC6", *sym_list = "\uFB18", *sym_Wfile = "\uFC50";

struct motorista
{                      // definindo o conteúdo Struct de motorista
    int id;            // 1
    char nome[50];     // Salomão Uribe Naval
    char sexo[1];      // M
    char cnh[11];      // 54200979341
    char validade[10]; // 30/11/2036
    int idade;         // 35
    int state;         // controle de exclusão logica
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
/*
Criei esta proc para poder rodar em Linux ou windows quando for ler as entradas de string
Essa função clearBuffer irá consumir todos os caracteres do buffer de entrada até encontrar uma quebra de linha ou o final do arquivo.Essa abordagem é mais portátil e menos propensa a comportamentos indefinidos em diferentes sistemas operacionais e compiladores.
*/

void clearBuffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;

    // Adicione a linha abaixo para lidar com a nova linha pendente no buffer
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

// void menuPrefixBar()
// {
//     printf("\n%s              ", w_block1);
// }

// void menuPrefixBarArrow()
// {
//     printf("\n%s              s ", w_block1, sym_arrow);
// }

int menuPrincipal();
int subMenuConsulta();
int modCadMotorista();

int main()
{
    pt_br();
    clearScreen();
    return menuPrincipal();
}

int subMenuConsulta()
{
    int selectSubMenuConsulta = 0;

    do
    {
        // clearScreen(); // remover comentário apó implementar funções
        menuTopBar();
        printf("\n              %s MENU CONSULTA ", menu_idc);
        printf("\n              %s TODOS..... %s ", sym_1, sym_list);
        printf("\n              %s INDIVIDUAL %s ", sym_2, sym_id);
        printf("\n              %s VOLTAR..%s \n", sym_0, sym_bck);
        printf("\n              %s  ", sym_question);

        scanf("%d", &selectSubMenuConsulta);

        switch (selectSubMenuConsulta)
        {
        case 1:

            printf("\n              %s%s   Módulo %s TODOS %s\n", menu_idc, sym_arrow, sym_1, sym_list);
            // Incluir esta lina na função correspondente
            // Definir função para esta opção
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

int menuPrincipal()
{
    
    int selectMenu = 0;
    do
    {
        clearScreen();
        // clearScreen(); // remover comentário apó implementar funções
        menuTopBar();
        printf("\n              %s MENU PRINCIPAL ", menu_idc);
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
            printf("\n              %s%s   Módulo %s LISTAR TODOS OS MOTORISTAS (ORDENADOS POR IDADE) %s\n", menu_idc, sym_arrow, sym_6, sym_sort);
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

int modCadMotorista()
{
    void clearBuffer(void);
    int finalizar = 0;
    struct motorista cadMo;

    if ((datafile = fopen(FILENAME, "rb+")) == NULL)
    {
        if ((datafile = fopen(FILENAME, "wb")) == NULL)
        {
            printf("\n              %s ERRO", sym_erro);
            printf("\n              %s Não foi possível criar o arquivo ", sym_del);
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
        scanf("%d", &cadMo.id);
        clearBuffer();

        printf("              %s Nome Motorista: ", sym_Wfile);
        fgets(cadMo.nome, sizeof(cadMo.nome), stdin);
        cadMo.nome[strcspn(cadMo.nome, "\n")] = '\0';
        clearBuffer();

        printf("              %s Sexo Motorista: ", sym_Wfile);
        fgets(cadMo.sexo, sizeof(cadMo.sexo), stdin);
        cadMo.sexo[strcspn(cadMo.sexo, "\n")] = '\0';
        clearBuffer();

        printf("              %s CNH Motorista: ", sym_Wfile);
        fgets(cadMo.cnh, sizeof(cadMo.cnh), stdin);
        cadMo.cnh[strcspn(cadMo.cnh, "\n")] = '\0';
        clearBuffer();

        printf("              %s Validade CNH: ", sym_Wfile);
        fgets(cadMo.validade, sizeof(cadMo.validade), stdin);
        cadMo.validade[strcspn(cadMo.validade, "\n")] = '\0';
        clearBuffer();

        printf("              %s Idade Motorista: ", sym_Wfile);
        scanf("%d", &cadMo.idade);
        clearBuffer();

        cadMo.state = 0;

        clearScreen();

        moduleTopBar();
        printf("\n              %d %s %s   %s CADASTRADO!\n", cadMo.id, cadMo.nome, sym_arrow, sym_save);

        printf("\n              %s Deseja encerrar o cadastro", sym_question);
        printf("\n              %s Digite %s para sair       ", sym_off, sym_1);
        printf("\n              %s Digite %s para continuar  ", sym_sort, sym_0);

        scanf("%d", &finalizar);

    } while (finalizar != 1);

    fclose(datafile);
    return (1);
}