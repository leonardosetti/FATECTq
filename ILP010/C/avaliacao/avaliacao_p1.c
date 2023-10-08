#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

const int DIMENSAO_MINIMA = 2;

void imprimirSeparador(int colunas, int *larguras) {
    printf("+");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < larguras[i] + 2; j++) {
            printf("-");
        }
        printf("+");
    }
    printf("\n");
}

void imprimirMatriz(int linhas, int colunas, int matriz[linhas][colunas], int *larguras) {
    imprimirSeparador(colunas, larguras);


    for (int i = 0; i < linhas; i++) {
        printf("|");
        for (int j = 0; j < colunas; j++) {
            printf(" %*d |", larguras[j], matriz[i][j]);
        }
        printf("\n");

        imprimirSeparador(colunas, larguras);
    }
}

void preencherMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor para a posição [linha %d][coluna %d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            while (matriz[i][j] <= 0) {
                printf("Por favor, digite um valor inteiro e positivo: ");
                scanf("%d", &matriz[i][j]);
            }
        }
    }
}

int calcularSomaDiagonal(int dimensao, int matriz[dimensao][dimensao]) {
    int soma = 0;
    for (int i = 0; i < dimensao; i++) {
        soma += matriz[i][i];
    }
    return soma;
}

int calcularSomaMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    int soma = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

long long calcularProdutoMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    long long produto = 1;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            produto *= matriz[i][j];
        }
    }
    return produto;
}

void contarParesImpares(int linhas, int colunas, int matriz[linhas][colunas], int *pares, int *impares) {
    *pares = 0;
    *impares = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] % 2 == 0) {
                (*pares)++;
            } else {
                (*impares)++;
            }
        }
    }
}

long long calcularProdutoDiagonal(int dimensao, int matriz[dimensao][dimensao]) {
    long long produto = 1;
    for (int i = 0; i < dimensao; i++) {
        produto *= matriz[i][i];
    }
    return produto;
}

int main() {
    int linhas, colunas;

    limparTela();
    setlocale(LC_ALL, "Portuguese");

    do {
        limparTela();
        printf("Digite o número para dimensionar a matriz quadrática (maior que 2): ");
        scanf("%d", &linhas);
        colunas = linhas;

        while (linhas <= DIMENSAO_MINIMA) {
            printf("\nPor favor, digite um número maior que 2: ");
            scanf("%d", &linhas);
            colunas = linhas;
        }

        int matriz[linhas][colunas];
        preencherMatriz(linhas, colunas, matriz);

        printf("\n\nMatriz gerada: [%d] por [%d]\n", linhas, colunas);


        int larguras[colunas];
        for (int j = 0; j < colunas; j++) {
            larguras[j] = 0;
            for (int i = 0; i < linhas; i++) {
                int valor = matriz[i][j];
                int digitos = 1;

                while (valor /= 10) {
                    digitos++;
                }

                if (digitos > larguras[j]) {
                    larguras[j] = digitos;
                }
            }
        }

        imprimirMatriz(linhas, colunas, matriz, larguras);

        printf("\nResumo:\n");
        printf("Soma da diagonal principal: %d\n", calcularSomaDiagonal(linhas, matriz));
        printf("Soma dos elementos da matriz: %d\n", calcularSomaMatriz(linhas, colunas, matriz));
        printf("Produto dos elementos da matriz: %lld\n", calcularProdutoMatriz(linhas, colunas, matriz));

        int pares, impares;
        contarParesImpares(linhas, colunas, matriz, &pares, &impares);
        printf("Número de elementos pares: %d\n", pares);
        printf("Número de elementos ímpares: %d\n", impares);

        printf("Produto da diagonal principal: %lld\n", calcularProdutoDiagonal(linhas, matriz));

        printf("\n\nDeseja gerar outra matriz? (Digite 1 para sim, 0 para não): \n\n");
        scanf("%d", &linhas);
    } while (linhas == 1);

    return 0;
}
