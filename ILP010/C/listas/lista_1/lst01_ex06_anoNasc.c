#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

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

    int anoNascimento;
    int idade;

    // Obter o ano de nascimento do usuário
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    // Obter a data atual
    time_t agora;
    struct tm dataAtual;
    time(&agora);
    dataAtual = *localtime(&agora);

    // Calcular a idade
    idade = dataAtual.tm_year + 1900 - anoNascimento;

    // Verificar se o aniversário já ocorreu este ano
    if (dataAtual.tm_mon < dataAtual.tm_mon + 1 ||
        (dataAtual.tm_mon == dataAtual.tm_mon + 1 && dataAtual.tm_mday < dataAtual.tm_mday))
    {
        idade--;
    }

    // Exibir a idade
    printf("Sua idade é: %d anos\n", idade);

    return 0;
}