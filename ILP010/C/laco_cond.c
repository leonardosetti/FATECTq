#include <stdio.h>

int main()
{

    const int ano_atual = 2023;
    int idade, ano_nasc, opc = 0;

    while (opc != 1)
    {
        printf("Qual o ano de nascimento do usuario? \n");
        scanf("%d", &ano_nasc);

        if (ano_nasc <= 0)
        {
            printf("O ano digitado: %d, e ivalido!\n", ano_nasc);
        }
        else if (ano_atual >= ano_nasc)
        {
            idade = ano_atual - ano_nasc;
            printf("A idade do usuario e: %d anos\n", idade);
        }

        else
        {
            printf("O ano digitado: %d, deve ser menor que o ano corrente: %d!\n", ano_nasc, ano_atual);
        }
        printf("Deseja contionuar calculando? 0= Sim! 1=Nao\n %d");
        scanf("%d", &opc);
    }

    return (0);
}
