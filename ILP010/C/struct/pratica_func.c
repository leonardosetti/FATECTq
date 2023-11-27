#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM=100;
#define FILENAME "motoristas.dados";

const char *sym_check = "\u2714", *w_block1 = "\u2588", *sym_arrow = "\u27F9", *sym_save = "\uFB1A", *sym_0 = "\u24FF", *sym_1 = "\u278A", *sym_2 = "\u278B", *sym_3 = "\u278C", *sym_4 = "\u278D", *sym_5 = "\u278E", *sym_6 = "\u278F", *sym_7 = "\u2790", *sym_8 = "\u2791", *sym_9 = "\u2792", *sym_erro = "\u2716", *sym_bye = "\uFC0C", *sym_bck = "\u2B6F", *sym_question = "\uFC89", *sym_edit = "\uFAB6", *sym_off = "\u23FB", *menu_idc = "\u21F2", *sym_del = "\uFAE7", *sym_Ldel = "\uFB12", *sym_cad = "\uFAD1", *sym_id = "\uFBC9", *sym_sort = "\uFBC6", *sym_list = "\uFB18";

void pt_br(){
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

void menuTopBar()
{
    for (int i = 0; i < 79; i++)
    {
        printf("%s", w_block1);
    }
    printf("%s\n", w_block1);
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

int subMenuConsulta()
{
    int selectSubMenuConsulta = 0;

    do
    {
        // clearScreen(); // remover comentário apó implementar funções
        menuTopBar();
        printf("\n              %s MENU CONSULTA ",menu_idc);
        printf("\n              %s TODOS..... %s ", sym_1,sym_list);
        printf("\n              %s INDIVIDUAL %s ", sym_2,sym_id);
        printf("\n              %s VOLTAR..%s \n", sym_0, sym_bck);
        printf("\n              %s  ", sym_question);
                
        scanf("%d", &selectSubMenuConsulta);

        switch (selectSubMenuConsulta)
        {
        case 1:
            
            printf("\n              %s%s   Módulo %s TODOS %s\n", menu_idc, sym_arrow, sym_1, sym_list);
            //Incluir esta lina na função correspondente
            //Definir função para esta opção
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
        //clearScreen(); // remover comentário apó implementar funções
        menuTopBar();
        printf("\n              %s MENU PRINCIPAL ", menu_idc);
        printf("\n              %s CADASTRAR....................................... %s ", sym_1, sym_save);
        printf("\n              %s CONSULTAR....................................... %s ", sym_2,sym_list);
        printf("\n              %s ALTERAR......................................... %s ", sym_3,sym_edit);
        printf("\n              %s EXCLUIR (LOGICAMENTE)........................... %s ", sym_4,sym_del);
        printf("\n              %s LISTAR TODOS EXCLUÍDOS LOGICAMENTE.............. %s ", sym_5,sym_Ldel);
        printf("\n              %s LISTAR TODOS OS MOTORISTAS (ORDENADOS POR IDADE) %s ", sym_6,sym_sort);
        printf("\n              %s SAIR:........................................... %s ", sym_0,sym_bye);
        printf("\n              %s  ", sym_question);

        scanf("%d", &selectMenu);

        switch (selectMenu)
        {
        case 1:
            printf("\n              %s%s   Módulo %s CADASTRAR %s\n", menu_idc, sym_arrow, sym_1, sym_save);
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
        selectMenu = 0;
        return selectMenu;
}



int main()
{
    pt_br();
    clearScreen();
    menuPrincipal();
    return 0;
}
