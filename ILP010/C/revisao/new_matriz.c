// acrie um programa em C, que ofereça um prompt para que o usuário defina as dimensões de uma matriz(este bloco deve ser uma função ou procedure);
// Após definidas as dimensões da matriz[i] x[j], o usuário deve ser capaz de definir quais valores devem ocupar cada posição, e também deve haver a opção para que a matriz seja preenchida automaticamente de forma sequencial com números inteiros maiores que zero(1, 2, 3, 4, 5, 6, 7, 8, 9, ...);
// Após o preenchimento da matriz o usuário deve acessar um prompt para a escolha das seguintes opções : Soma do total dos valores preenchidos na matriz;
// Multiplicação(produto) dos valores preenchidos na matriz;
// Soma da diagonal principal dos valores preenchidos na matriz;
// Soma da diagonal secundária dos valores preenchidos na matriz;
// Soma de ambas as diagonais dos valores preenchidos na matriz;
// Produto da diagonal principal dos valores preenchidos na matriz;
// Produto da diagonal secundária dos valores preenchidos na matriz;
// Produto de ambas as diagonais dos valores preenchidos na matriz;
// Conte e mostre todos os números pares da matriz;
// Conte e mostre todos os números ímpares da matriz;
// Mostre o maior e o menor números pares da matriz;
// Mostre o maior e o menor números ímpares da matriz;
// Mostre o maior e o menor números da matriz;
// Implemente de forma modularizada utilizando funções ou procedures.a cada operação realizada, o usuário deve ter a opção de escolher uma nova operação para execução ou a opção do usuário encerrar o programa ou retornar ao início(fluxo de dimensionamento da matriz)

#include <stdio.h>

void definirDimensoes(int *linhas, int *colunas)
{
    printf("Informe o número de linhas da matriz: ");
    scanf("%d", linhas);

    printf("Informe o número de colunas da matriz: ");
    scanf("%d", colunas);
}

void preencherMatriz(int matriz[][100], int linhas, int colunas)
{
    int opcao;
    printf("Deseja preencher a matriz manualmente (1) ou automaticamente (2)? ");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                printf("Informe o valor para matriz[%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
    }
    else if (opcao == 2)
    {
        int valor = 1;
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                matriz[i][j] = valor++;
            }
        }
    }
}

void mostrarMatriz(int matriz[][100], int linhas, int colunas)
{
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int somaMatriz(int matriz[][100], int linhas, int colunas)
{
    int soma = 0;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int multiplicacaoMatriz(int matriz[][100], int linhas, int colunas)
{
    int produto = 1;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            produto *= matriz[i][j];
        }
    }
    return produto;
}

int somaDiagonalPrincipal(int matriz[][100], int ordem)
{
    int soma = 0;
    for (int i = 0; i < ordem; i++)
    {
        soma += matriz[i][i];
    }
    return soma;
}

int somaDiagonalSecundaria(int matriz[][100], int ordem)
{
    int soma = 0;
    for (int i = 0; i < ordem; i++)
    {
        soma += matriz[i][ordem - 1 - i];
    }
    return soma;
}

int produtoDiagonalPrincipal(int matriz[][100], int ordem)
{
    int produto = 1;
    for (int i = 0; i < ordem; i++)
    {
        produto *= matriz[i][i];
    }
    return produto;
}

int produtoDiagonalSecundaria(int matriz[][100], int ordem)
{
    int produto = 1;
    for (int i = 0; i < ordem; i++)
    {
        produto *= matriz[i][ordem - 1 - i];
    }
    return produto;
}

void numerosParesImpares(int matriz[][100], int linhas, int colunas)
{
    printf("Numeros pares na matriz:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                printf("%d\t", matriz[i][j]);
            }
        }
    }
    printf("\n");

    printf("Numeros impares na matriz:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] % 2 != 0)
            {
                printf("%d\t", matriz[i][j]);
            }
        }
    }
    printf("\n");
}

void maiorMenorParesImpares(int matriz[][100], int linhas, int colunas)
{
    int maiorPar = -1, menorPar = 1000000; // Inicialize com valores que garantam uma comparação
    int maiorImpar = -1, menorImpar = 1000000;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                if (matriz[i][j] > maiorPar)
                    maiorPar = matriz[i][j];
                if (matriz[i][j] < menorPar)
                    menorPar = matriz[i][j];
            }
            else
            {
                if (matriz[i][j] > maiorImpar)
                    maiorImpar = matriz[i][j];
                if (matriz[i][j] < menorImpar)
                    menorImpar = matriz[i][j];
            }
        }
    }

    printf("Maior e menor numeros pares na matriz: %d e %d\n", maiorPar, menorPar);
    printf("Maior e menor numeros impares na matriz: %d e %d\n", maiorImpar, menorImpar);
}

void maiorMenorMatriz(int matriz[][100], int linhas, int colunas)
{
    int maior = -1, menor = 1000000; // Inicialize com valores que garantam uma comparação

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
            if (matriz[i][j] < menor)
                menor = matriz[i][j];
        }
    }

    printf("Maior e menor numeros na matriz: %d e %d\n", maior, menor);
}

int main()
{
    int linhas, colunas;
    definirDimensoes(&linhas, &colunas);

    int matriz[100][100];

    preencherMatriz(matriz, linhas, colunas);

    int escolha;

    do
    {
        mostrarMatriz(matriz, linhas, colunas);

        printf("\nEscolha uma operacao:\n");
        printf("1. Soma dos valores da matriz\n");
        printf("2. Multiplicacao dos valores da matriz\n");
        printf("3. Soma da diagonal principal\n");
        printf("4. Soma da diagonal secundaria\n");
        printf("5. Soma de ambas as diagonais\n");
        printf("6. Produto da diagonal principal\n");
        printf("7. Produto da diagonal secundaria\n");
        printf("8. Produto de ambas as diagonais\n");
        printf("9. Numeros pares e impares\n");
        printf("10. Maior e menor numeros pares e impares\n");
        printf("11. Maior e menor numeros na matriz\n");
        printf("0. Encerrar o programa\n");

        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("A soma dos valores da matriz e: %d\n", somaMatriz(matriz, linhas, colunas));
            break;

        case 2:
            printf("O produto dos valores da matriz e: %d\n", multiplicacaoMatriz(matriz, linhas, colunas));
            break;

        case 3:
            printf("A soma da diagonal principal e: %d\n", somaDiagonalPrincipal(matriz, linhas));
            break;

        case 4:
            printf("A soma da diagonal secundaria e: %d\n", somaDiagonalSecundaria(matriz, linhas));
            break;

        case 5:
            printf("A soma de ambas as diagonais e: %d\n", somaDiagonalPrincipal(matriz, linhas) + somaDiagonalSecundaria(matriz, linhas));
            break;

        case 6:
            printf("O produto da diagonal principal e: %d\n", produtoDiagonalPrincipal(matriz, linhas));
            break;

        case 7:
            printf("O produto da diagonal secundaria e: %d\n", produtoDiagonalSecundaria(matriz, linhas));
            break;

        case 8:
            printf("O produto de ambas as diagonais e: %d\n", produtoDiagonalPrincipal(matriz, linhas) * produtoDiagonalSecundaria(matriz, linhas));
            break;

        case 9:
            numerosParesImpares(matriz, linhas, colunas);
            break;

        case 10:
            maiorMenorParesImpares(matriz, linhas, colunas);
            break;

        case 11:
            maiorMenorMatriz(matriz, linhas, colunas);
            break;

        case 0:
            printf("Encerrando o programa. Ate logo!\n");
            break;

        default:
            printf("Opcao invalida. Tente novamente.\n");
        }

    } while (escolha != 0);

    return 0;
}
