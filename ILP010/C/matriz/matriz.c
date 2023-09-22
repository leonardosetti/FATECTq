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

    int matriz[3][3] , linha, coluna, aux, opc;

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;

    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;

    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;




clearScreen();
    printf("\nMatriz");
    printf("\n-------------");
    for (linha = 0; linha < 3; linha++)
    {
        printf("\n|");

        for (coluna= 0; coluna< 3; coluna++)
        {
            printf(" %d ", matriz[linha][coluna]);
            printf("|");
        }
        printf("\n-------------");
    }
    printf("\n\n");

aux=0;
 for (linha=0;linha<3;linha++)   {
     for (coluna = 0; coluna < 3; coluna++)
     {
         aux += matriz[linha][coluna];
     }
     
 }
 printf("A soma da matriz é %d", aux);



    return 0;
}
