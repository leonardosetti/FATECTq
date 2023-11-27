#include <stdio.h>
#include <string.h>


struct Passagem {
    char nome[50];
    char destino[50];
    float preco;
    int codigo;
};


struct Passagem passagens[100];
int totalPassagens = 0;


void adicionarPassagem() {
    struct Passagem novaPassagem;
    printf("Nome do passageiro: ");
    scanf("%s", novaPassagem.nome);
    printf("Destino: ");
    scanf("%s", novaPassagem.destino);
    printf("Preco: ");
    scanf("%f", &novaPassagem.preco);
    novaPassagem.codigo = totalPassagens + 1;
    passagens[totalPassagens++] = novaPassagem;
    printf("Passagem adicionada com sucesso!\n");
}


void listarPassagens() {
    if (totalPassagens == 0) {
        printf("Nenhuma passagem vendida ainda.\n");
        return;
    }

    printf("Lista de passagens vendidas:\n");
    for (int i = 0; i < totalPassagens; i++) {
        printf("Codigo: %d, Nome: %s, Destino: %s, Preco: R$ %.2f\n",
               passagens[i].codigo, passagens[i].nome, passagens[i].destino, passagens[i].preco);
    }
}


void buscarPassagem() {
    int codigo;
    printf("Digite o codigo da passagem: ");
    scanf("%d", &codigo);

    for (int i = 0; i < totalPassagens; i++) {
        if (passagens[i].codigo == codigo) {
            printf("Codigo: %d, Nome: %s, Destino: %s, Preco: R$ %.2f\n",
                   passagens[i].codigo, passagens[i].nome, passagens[i].destino, passagens[i].preco);
            return;
        }
    }

    printf("Passagem não encontrada.\n");
}


float calcularTotalVendas() {
    float total = 0.0;
    for (int i = 0; i < totalPassagens; i++) {
        total += passagens[i].preco;
    }
    return total;
}

int main() {
    int opcao;

    do {
        printf("\nMenu de Opcoes:\n");
        printf("1. Adicionar Passagem\n");
        printf("2. Listar Passagens\n");
        printf("3. Buscar Passagem\n");
        printf("4. Total de Vendas\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarPassagem();
                break;
            case 2:
                listarPassagens();
                break;
            case 3:
                buscarPassagem();
                break;
            case 4:
                printf("Total de vendas: R$ %.2f\n", calcularTotalVendas());
                break;
            case 5:
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
