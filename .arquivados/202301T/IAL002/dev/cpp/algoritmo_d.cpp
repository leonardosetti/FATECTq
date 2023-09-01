#include <stdio.h>
#define paramSal 500.00

int main()
{
    float s_atual, s_novo;
    printf("\nInforme o valor atual do salario do Funcionario:\n");
    scanf("%f%*c", &s_atual);
    if (s_atual <= paramSal)
    {
        s_novo = s_atual * 1.2;
        printf("\nO salario do funcionario foi atualizado para R$%3.2f)\n", s_novo);
    }
    else
    {
        s_novo = s_atual * 1.1;
        printf("\nO salario do funcionario foi atualizado para R$%3.2f\n", s_novo);
    }
    getchar();
    return 0;
}