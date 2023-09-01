#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tabuada(int _tabuada)

{

    printf("\n------------\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d * %d = %d", i, _tabuada, (i * _tabuada));

    }
    printf("\n------------\n");
}

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

    int val;
    char opc = 's';

    do
    {
        clearScreen();
        printf("Informe o valor que deseja imprimir a tabuada:\n");
        scanf("%d", &val);

        tabuada(val);

       printf("Deseja continuar? Digite 's' para sim, ou qualquer tecla para sair:\n");
        scanf(" %c", &opc);
    } while (opc == 's');

    return 0;
}

