#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, t, opc = 1;

    printf("Informe o número desejado para gerar a tabuada correspondente:\n");

    while (opc != 0)
    {
        clearScreen(); // Call the clearScreen function to clear the screen

        scanf("%d", &t);
        printf("Tabuada do %d\n", t);
        printf("_____________________\n");

        for (i = 1; i <= 10; i++)
        {
            printf("\n%d * %d = %d", i, t, (i * t));
        }

        printf("\n_____________________\n");
        printf("Deseja continuar calculando? Digite 0 para sair\n");
        scanf("%d", &opc);
    }

    return 0;
}
