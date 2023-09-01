#include <stdio.h>
#include <fstream>
#include <math.h>

// Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que:
// Área = (base * altura) / 2.

       int
       main()
{

    int tipo_t;
    float base_t, altura_t, lado_AB, lado_BC, lado_CA, catetos, hipotenusa, cateto_maior, cateto_menor, semi_pt, area_t;
    // menu para o cálculo:

    printf("\nEscolha o cálculo de acordo com o tipo do triângulo:\n");
    printf("\n1 - Cálculo simples (qualquer triângulo com base e altura definidos): ");
    printf("\n2 - Triângulo isósceles: ");
    printf("\n3 - Triângulo equilátero: ");
    printf("\n4 - Triângulo escaleno: ");
    printf("\n5 - Triângulo Retângulo: ");
    printf("\n ");
    printf("\nOpção ===>  ");

    scanf("%d%*c", &tipo_t);

    if (tipo_t == 1)
    {
        printf("\n:: Você escolheu  o método simples de cálculo:\n");
        printf("\nDetermine o valor da base do triângulo\n");
        printf("\nBase = ");
        scanf("%f%*c", &base_t);
        printf("\nDetermine o valor da altura do triângulo\n");
        printf("\nAltura = ");
        scanf("%f%*c", &altura_t);

        area_t = (base_t * altura_t) / 2;

        printf("\nA área calculada do triângulo corresponde a: %.3f", area_t);
    }
    else if (tipo_t == 2)
    {
        printf("\n:: Você escolheu método Triângulo Isósceles de cálculo:\n");
        printf("\nDetermine o valor da base do triângulo\n");
        printf("\nBase = ");
        scanf("%f%*c", &base_t);
        printf("\nDetermine o valor dos lados do triângulo\n");
        printf("\nValor de um dos lados do Triângulo isósceles = ");
        scanf("%f%*c", &hipotenusa);

        cateto_menor = base_t / 2;
        altura_t = pow(hipotenusa, 2.0) - pow(cateto_menor, 2.0);
        altura_t = sqrt(altura_t);
        area_t = (base_t * altura_t) / 2;

        printf("\nA área calculada do triângulo corresponde a: %.3f", area_t);
    }

    else if (tipo_t == 3)
    // para o triângulo equilátero: altura = (lado * raiz de 3)/2
    // para o triângulo equilátero: área = (lado² * raiz de 3)/4

    {
        printf("\n:: Você escolheu método Triângulo Equilátero de cálculo:\n");
        printf("\nDetermine o valor do lado do triângulo\n");
        printf("\nLado = ");
        scanf("%f%*c", &lado_AB);

        altura_t = (lado_AB * sqrt(3)) / 2;
        area_t = (pow(lado_AB, 2.0) * sqrt(3)) / 4;

        printf("\nA área calculada do triângulo corresponde a: %.2f\n", area_t);
        printf("\n* Bonus: A altura calculada do triângulo corresponde a: %.2f\n", altura_t);
    }

    else if (tipo_t == 4)
    {
        printf("\n:: Você escolheu método Triângulo Escaleno de cálculo (Fórmula de Heron):\n");
        printf("\nDetermine o valor do seguimento AB do triângulo\n");
        printf("\nLado AB = ");
        scanf("%f%*c", &lado_AB);
        printf("\nDetermine o valor do seguimento BC do triângulo\n");
        printf("\nLado BC = ");
        scanf("%f%*c", &lado_BC);
        printf("\nDetermine o valor do seguimento CA do triângulo\n");
        printf("\nLado CA = ");
        scanf("%f%*c", &lado_CA);

        semi_pt = (lado_AB + lado_BC + lado_CA) / 2;
        area_t = sqrt(semi_pt * ((semi_pt - lado_AB) * (semi_pt - lado_BC) * (semi_pt - lado_CA)));
        
        printf("\nA área calculada do triângulo corresponde a: %.2f\n", area_t);
    }
    else if (tipo_t == 5){

        printf("\n:: Você escolheu método Triângulo Retângulo de cálculo (Fórmula de Pitágoras):\n");
        printf("\nDetermine o valor do cateto menor\n");
        printf("\nCateto Menor = ");
        scanf("%f%*c", &cateto_menor);
        printf("\nDetermine o valor do cateto maior\n");
        printf("\nCateto Maior = ");
        scanf("%f%*c", &cateto_maior);

        area_t = (cateto_maior*cateto_menor)/2;

        printf("\nA área calculada do triângulo corresponde a: %.2f\n", area_t);

        }
    else
        {
            printf("\nOpção inválida, reinicie o programa.\n");
            printf("\nPrograma encerrado!\n");
        }

        getchar();
        return 0;
    }