// Faça um programa que calcule e mostre a área de um círculo. Sabe-se que:
// Área = π * R^2
// Raio = Diâmetro /2
// π = 3,14159265358979323846

#include <stdio.h>
#include <math.h>
#include <fstream>
#define PI (2 * acos(0.0))

int main()
{

    
    float raio, circ, diam, area_circ;
    int opt;

    printf("Valor considerado de π %f\n", PI);

    printf("\nEscolha a opção que deseja utilizar para o cálculo da área do Círculo:");
    printf("\n1 - Raio");
    printf("\n2 - Diâmetro");
    printf("\nOpção ===> ");
    scanf("%d%*c", &opt);

    if (opt == 1)
    {
        printf("\nCálculo da área do circulo pelo valor do Raio");
        printf("\n\nInforme o valor do Raio do Círculo:");
        printf("\n===> Raio: ");
        scanf("%f%*c", &raio);
        area_circ = PI * pow(raio, 2.0);

        printf("\nCalculo da área do círculo realizado com sucesso.");
        printf("\nA área do circulo corresponde a %.3f", area_circ);
        printf(" cm²");
        printf("\n\nO programa foi encerrado.\n");
    }
    else if (opt == 2)
    {
        printf("\nCálculo da área do circulo pelo valor do Diâmetro");
        printf("\n\nInforme o valor do Diâmetro do Círculo:");
        printf("\n===> Diâmetro: ");
        scanf("%f%*c", &diam);
        raio=diam/2;
        area_circ = PI * pow(raio, 2.0);

        printf("\nCalculo da área do círculo realizado com sucesso.");
        printf("\nA área do circulo corresponde a %.3f", area_circ);
        printf(" cm²");
        printf("\n\nO programa foi encerrado.\n");
    }
    else
    {
        printf("\nOpção inválida.");
        printf("\n\nO programa foi encerrado.\n");
        
    }

    getchar();
    return 0;
}