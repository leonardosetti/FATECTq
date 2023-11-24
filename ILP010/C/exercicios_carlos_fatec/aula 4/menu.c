#include <stdio.h>
#include <stdlib.h>
int main() {
    int opc;
    do {
        opc = 0;
        system("cls");
        printf("\n MENU PRINCIPAL");
        printf("\n- - - - - - - - - -");
        printf("\n1. somar");
        printf("\n2. dividir");
        printf("\n3. subtrair");
        printf("\n4. multiplicar");
        printf("\n- - - - - - - - - -");
        printf("\n9. finalizar/Sair ");
        scanf("%d", &opc);
        if (opc == 1) {
            system("cls");
            printf("opcao 1");
            printf("\n Deseja continuar (S/N): ");
            getch();
        }
        else
        {
            if (opc == 2)
                printf("opcao 2");
            else if (opc == 3)
                printf("opcao 3");
            else if (opc == 4)
                printf("opcao 5");
            else if (opc == 9)
                printf("finaliziando ....");
            else
                printf("opcao Invalida");
        }

    } while (opc != 9);

    return (0);
}