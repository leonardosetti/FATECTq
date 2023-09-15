// Faça um programa em C que leia um vetor com N elementos e calcule:
// Produto dos elementos
// Menor elemento impar
// Porcentagem de elementos > 0, = 0, < 0
// Média aritmética dos elementos pares

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

    int _vetor[100], _result = 0, _tamanho;

    // definindo tamanho N do array

    printf("Informe o valor para o número de posições do vetor de cálculo\n--> ");
    scanf("%d", &_tamanho);

    printf(" [Total de posições:%d]\n\n", _tamanho);


    // inserindo valores nas posições
    for (int i; i < _tamanho; i++)
    {
        printf("Informe o valor da posição %d:\n --> ");
        scanf("%d", &_vetor[i]);
    }
    printf("Vetor: %d", _vetor);

    return 0;
}