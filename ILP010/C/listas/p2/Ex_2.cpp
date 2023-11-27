#include <stdio.h>
#include <stdlib.h>


struct Funcionario
{
    char nome[100];
    char endereco[100];
    char telefone[15];
    float salario;
    char funcao[50];
};


void preencherFuncionario(struct Funcionario *funcionario, int numero)
{
    printf("Funcionario %d:\n", numero + 1);
    printf("Nome: ");
    scanf("%s", funcionario->nome);
    printf("Endereço: ");
    scanf("%s", funcionario->endereco);
    printf("Telefone: ");
    scanf("%s", funcionario->telefone);
    printf("Salario: ");
    scanf("%f", &funcionario->salario);
    printf("Funcao: ");
    scanf("%s", funcionario->funcao);
}

int main()
{
    int totalFuncionarios = 50;
    struct Funcionario funcionarios[totalFuncionarios];


    for (int i = 0; i < totalFuncionarios; i++)
    {
        preencherFuncionario(&funcionarios[i], i);
    }


    printf("Funcionários que ganham mais de R$ 1.500,00:\n");
    for (int i = 0; i < totalFuncionarios; i++)
    {
        if (funcionarios[i].salario > 1500.0)
        {
            printf("Nome: %s, Salario: R$ %.2f\n", funcionarios[i].nome, funcionarios[i].salario);
        }
    }

    return 0;
}
