#include <stdio.h>

int main()
{

    float salario, desconto;

    printf("Digite o salário: ");
    scanf("%d", &salario);

    if (salario >= 1000)
    {
        desconto = salario - salario * 0.05;
        printf("desconto aplicado: %f", desconto);
    }
    if (salario >= 1001)
    {
        desconto = salario - salario * 0.10;
        printf("desconto aplicado: %f", desconto);
    }

    else
    {
        desconto = salario - salario * 0.05;
        printf("desconto aplicado: %f", desconto);
    }

    return (0);
}
