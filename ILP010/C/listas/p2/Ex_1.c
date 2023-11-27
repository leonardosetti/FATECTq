#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

struct aluno
{
    char nome[50];
    int idade;
    char sexo[1];
};

int binaria(int n, int v[TAM], int valor);
void bolha(int n, int v[TAM]);

void OrdenarPorNome(struct aluno alunos[], int n);
void OrdenarPorIdade(struct aluno alunos[], int n);
void OrdenarPorSexo(struct aluno alunos[], int n);

int Programa(struct aluno alunos[]);
void MostrarListaAlunos(struct aluno alunos[], int Tamanho);

int main()
{
    struct aluno alunos[TAM];
    return Programa(alunos);
}

int Programa(struct aluno alunos[])
{
    int opc = 0;
    int Tamanho, i;

    do
    {
        printf("\n Exemplo de struct");
        printf("\n");

        printf("\n 1. Incluir aluno");
        printf("\n 2. Listar alunos");
        printf("\n 3. Listar alunos por nome");
        printf("\n 4. Listar alunos por idade");
        printf("\n 5. Listar alunos por sexo");
        printf("\n 6. Finalizar programa");

        printf("\n Escolha uma opcao: ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:

            printf("\n Informe o número de elementos: ");
            scanf("%d", &Tamanho);

            for (i = 0; i < Tamanho; i++)
            {
                printf("\n Informe o [%d] nome: ", i + 1);
                setbuf(stdin, NULL);
                scanf("%[^\n]", alunos[i].nome);

                printf("\n Informe o [%d] idade: ", i + 1);
                scanf("%4d", &alunos[i].idade);

                printf("\n Informe o [%d] sexo (F/M): ", i + 1);
                setbuf(stdin, NULL);
                scanf("%c", &alunos[i].sexo);
            }

            break;
        case 2:
            MostrarListaAlunos(alunos, Tamanho);
            break;
        case 3:
            OrdenarPorNome(alunos, Tamanho);
            MostrarListaAlunos(alunos, Tamanho);
            break;
        case 4:
            OrdenarPorIdade(alunos, Tamanho);
            MostrarListaAlunos(alunos, Tamanho);
            break;
        case 5:
            OrdenarPorSexo(alunos, Tamanho);
            MostrarListaAlunos(alunos, Tamanho);
            break;
        case 6:
            printf("\nFinalizando o programa...");
            break;
        default:
            printf("\nOpção inválida. Tente novamente.");
            break;
        }

        printf("\n Pressione qualquer tecla para continuar...");
        getchar();

    } while (opc != 6);

    return 0;
}

void MostrarListaAlunos(struct aluno alunos[], int Tamanho)
{
    int i;

    printf("\nLista de Alunos ");
    for (i = 0; i < Tamanho; i++)
    {
        printf("\n[%d] - %30s | %d  | %s", i + 1, alunos[i].nome, alunos[i].idade, alunos[i].sexo);
    }
}

void OrdenarPorNome(struct aluno alunos[], int n)
{
    int i, j;
    struct aluno aux;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(alunos[i].nome, alunos[j].nome) > 0)
            {
                strcpy(aux.nome, alunos[i].nome);
                aux.idade = alunos[i].idade;
                strcpy(aux.sexo, alunos[i].sexo);
                alunos[i] = alunos[j];
                alunos[j] = aux;
            }
        }
    }
}

void OrdenarPorIdade(struct aluno alunos[], int n)
{
    int i, j;
    struct aluno aux;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (alunos[i].idade > alunos[j].idade)
            {
                strcpy(aux.nome, alunos[i].nome);
                aux.idade = alunos[i].idade;
                strcpy(aux.sexo, alunos[i].sexo);
                alunos[i] = alunos[j];
                alunos[j] = aux;
            }
        }
    }
}

void OrdenarPorSexo(struct aluno alunos[], int n)
{
    int i, j;
    struct aluno aux;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(alunos[i].sexo, alunos[j].sexo) > 0)
            {
                strcpy(aux.nome, alunos[i].nome);
                aux.idade = alunos[i].idade;
                strcpy(aux.sexo, alunos[i].sexo);
                alunos[i] = alunos[j];
                alunos[j] = aux;
            }
        }
    }
}
