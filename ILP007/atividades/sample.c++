#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMSTR 150

void menuPrincipal()
{
    int opc;
    do
    {
        printf("\n[1] Inserir dados \n");
        printf("[2] Alterar dados \n");
        printf("[3] Remover dados \n");
        printf("[4] Exibir dados \n");
        printf("[0] Sair \n");
        printf("Escolha uma opção: ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            // Implemente a lógica para inserir dados
            printf("Opção 1 selecionada\n");
            break;
        case 2:
            // Implemente a lógica para alterar dados
            printf("Opção 2 selecionada\n");
            break;
        case 3:
            // Implemente a lógica para remover dados
            printf("Opção 3 selecionada\n");
            break;
        case 4:
            // Implemente a lógica para exibir dados
            printf("Opção 4 selecionada\n");
            break;
        case 0:
            printf("\n\n\n------------------------- Saindo!! ------------------------- \n\n\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (opc != 0);
}

void boasVindas(char *user)
{
    printf("Bem-vindo, %s ! \n", user);
    menuPrincipal();
}

int main()
{
    char user[TAMSTR];
    printf("Insira o seu nome de usuário: ");
    fgets(user, 150, stdin);

    printf("----------------------\n");
    printf("\nSample\n");
    boasVindas(user);

    getchar(); // Aguarda a entrada de um caractere antes de encerrar o programa
    return 0;
}
