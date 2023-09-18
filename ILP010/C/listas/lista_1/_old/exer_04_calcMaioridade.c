#include <stdio.h>
#include <stdlib.h>

// Faça um programa em C em que o usuário informe a sua idade e o programa informe se ele atingiu a maioridade ou não: Maioridade = 18 anos;

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void inputParam(int *val)
{
    clearScreen();
    printf("Insira um valor numérico inteiro para saber se \no usuário é maior ou menor de idade:\n");
    scanf("%d", val);
}

int main()
{
    int val;

    inputParam(&val);

    clearScreen();

    if (val <=0){
        printf("Não é possível calcular a maioridade com base nos parâmetros fornecidos.\n");
    } else if (val>0 && val<18){
        printf("O usuário com idade igual a %d é menor de idade.\n",val);
    }else{
        printf("O usuário com idade igual a %d é maior de idade.\n", val);
    }
    return 0;
}
