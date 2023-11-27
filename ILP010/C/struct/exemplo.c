#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "motoristas.dados"

struct motorista
{
    int id;
    char nome[50];
    char sexo;
    char nhabilitacao[12];
    char validade[11];
    int idade;
    int e;
};

FILE *datafile;

void clearBuffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
    if (c == '\n')
        ungetc('\n', stdin);
}

void cadastrarMotorista()
{
    struct motorista novoMotorista;
    printf("Código ID: ");
    scanf("%d", &novoMotorista.id);
    clearBuffer();

    printf("Nome Motorista: ");
    fgets(novoMotorista.nome, sizeof(novoMotorista.nome), stdin);
    novoMotorista.nome[strcspn(novoMotorista.nome, "\n")] = '\0';
    clearBuffer();

    printf("Idade Motorista: ");
    scanf("%d", &novoMotorista.idade);
    clearBuffer();

    printf("Sexo Motorista (M/F): ");
    scanf(" %c", &novoMotorista.sexo);
    clearBuffer();

    printf("CNH Motorista: ");
    scanf("%s", novoMotorista.nhabilitacao);
    clearBuffer();

    printf("Validade CNH: ");
    scanf("%s", novoMotorista.validade);
    clearBuffer();

    novoMotorista.e = 0;

    if ((datafile = fopen(FILENAME, "ab")) == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        exit(EXIT_FAILURE);
    }

    fwrite(&novoMotorista, sizeof(struct motorista), 1, datafile);

    fclose(datafile);
    printf("Motorista cadastrado com sucesso!\n");
}

void consultarTodos()
{
    struct motorista motoristaAtual;

    if ((datafile = fopen(FILENAME, "rb")) == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        exit(EXIT_FAILURE);
    }

    printf("\nID | Nome               | Idade | Sexo | CNH | Validade | E\n");
    printf("----------------------------------------------------------\n");

    while (fread(&motoristaAtual, sizeof(struct motorista), 1, datafile) == 1)
    {
        if (motoristaAtual.e == 0)
        {
            printf("%2d | %-18s | %5d |   %c  |   %s   |    %s     | %d\n",
                   motoristaAtual.id, motoristaAtual.nome, motoristaAtual.idade,
                   motoristaAtual.sexo, motoristaAtual.nhabilitacao,
                   motoristaAtual.validade, motoristaAtual.e);
        }
    }

    fclose(datafile);
}

int main()
{
    int opcao;

    do
    {
        printf("\nMenu:\n");
        printf("1. Cadastrar\n");
        printf("2. Consultar\n");
        printf("3. Alterar\n");
        printf("4. Excluir (Logicamente)\n");
        printf("5. Listar Todos os Registros Excluídos Logicamente\n");
        printf("6. Listar Todos os Motoristas (Ordenar por Idade)\n");
        printf("7. Finalizar/Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        clearBuffer();

        switch (opcao)
        {
        case 1:
            cadastrarMotorista();
            break;
        case 2:
            consultarTodos();
            break;
        // Adicione os demais casos conforme necessário
        case 7:
            printf("Finalizando programa. Até mais!\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 7);

    return 0;
}
