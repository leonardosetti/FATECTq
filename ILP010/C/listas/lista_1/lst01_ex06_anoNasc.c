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
    const int _ano = 2023;
    int _ano_nasc; 

    clearScreen();
    setlocale(LC_ALL, "Portuguese");

    return (0);
}