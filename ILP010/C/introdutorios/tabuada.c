#include <stdio.h>
#include <stdlib.h>

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    int t, opc = -1;

    while (opc != 0) {
        clearScreen();

        printf("Informe o número desejado para gerar a tabuada correspondente:\n");
        scanf("%d", &t);

        clearScreen();

        printf("Tabuada do %d\n", t);
        printf("_____________________\n");

        for (int i = 1; i <= 10; i++) {
            printf("\n%d * %d = %d", i, t, (i * t));
        }
        printf("\n_____________________\n");
        printf("Deseja continuar calculando? Digite 0 para sair\n");
        scanf("%d", &opc);
    }

    return 0;
}
