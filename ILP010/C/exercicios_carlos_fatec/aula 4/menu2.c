#include <stdio.h>
#include <stdlib.h>

opcaoMenu(int nopc);
opcaotitulo(int nopc);

int main()
{
    int opc;
    do
    {
        opc = 0;
        system("cls");
        printf("\n MENU PRINCIPAL 2 ");
        printf("\n- - - - - - - - - -");
        printf("\n1. somar");
        printf("\n2. dividir");
        printf("\n3. subtrair");
        printf("\n4. multiplicar");
        printf("\n- - - - - - - - - -");
        printf("\n9. finalizar/Sair ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            opcaoMenu(opc);
            break;
        case 2:
            opcaoMenu(opc);
            break;
        case 3:
            opcaoMenu(opc);
            break;
        case 4:
            opcaoMenu(opc);
        case 9:
            printf("\n\nSaindo...\n");
            break;
        default:
            printf("\n Opcao %c invalida", opc);
            getch();
            break;
        }

    } while (opc != 9);

    return (0);
}

opcaotitulo(int nopc)
{
    system("cls");
    printf("\n CALCULADORA ");
    printf("\n- - - - - - - - - -");

    if (nopc == 1)
        printf("\n Opcao de Somar");
    else if (nopc == 2)
        printf("\n Opcao de Dividir");
    else if (nopc == 3)
        printf("\n Opcao de Subtrair");
    else if (nopc == 4)
        printf("\n Opcao de Multiplicar");
    printf("\n- - - - - - - - - -");
}

opcaoMenu(int nopc)
{
    float a, b;
    opcaotitulo(nopc);
    printf("\n informe valor de a : ");
    scanf("%f", &a);
    printf("\n informe valor de b : ");
    scanf("%f", &b);
    // soma
    if (nopc == 1)
    {
        printf("Resultado da soma [ %.2f + %.2f ] = %.2f", a, b, (a + b));
    }
    if (nopc == 2)
    {
        printf("Resultado da dividir [ %.2f / %.2f ] = %.2f", a, b, (a / b));
    }
    if (nopc == 3)
    {
        printf("Resultado da subtrair [ %.2f - %.2f ] = %.2f", a, b, (a - b));
    }
     if (nopc == 4)
    {
        printf("Resultado da dividir [ %.2f * %.2f ] = %.2f", a, b, (a * b));
    }
    printf("\n ");
    getch();
}