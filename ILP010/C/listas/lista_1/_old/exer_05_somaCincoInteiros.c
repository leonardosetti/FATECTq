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

void inputParam(int inSoma[5])
{
    clearScreen();
    for (int i = 0; i < 5; i++)
    {
        printf("\nInsira um valor numérico inteiro na posição %d para saber realizar a soma\n", i + 1);
        scanf("%d", &inSoma[i]);
        while (inSoma[i] < 0)
        {
            printf("\nO valor %d inserido na posição %d não é permitido para a operação.\nReinsira o valor correto!\n", inSoma[i], i + 1);
            scanf("%d", &inSoma[i]);
        }
    }
}

void somaValores(int inSoma[5])
{
    int resultado = 0;
    for (int i = 0; i < 5; i++)
    {
        resultado += inSoma[i];
    }

    printf("\nO somatório total é de %d\n", resultado);
}

int main()
{
    int inSoma[5];
    setlocale(LC_ALL, "Portuguese");
    inputParam(inSoma);
    somaValores(inSoma);

    return 0;
}
