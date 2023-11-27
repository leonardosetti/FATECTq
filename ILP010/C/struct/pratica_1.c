#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void clearScreen() //proc limpa tela
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void testProc(){
    int count = 10;
    for (int i = 0 ; i < count; i++){
        printf("Test OK!\n");
    }
}

int qtd;

int testFunc(void)
{
    printf("Repetições:\n--> ");
    scanf("%d", &qtd);
    for (int i = 0; i < qtd; i++)
    {
        printf("Test OK! %d\n", i+1);
    }
    return qtd;
}

int main(){
clearScreen();
testProc();
testFunc();

    return 0;
}