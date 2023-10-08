/*
 * segundo.c
 *
 *  Created on: Oct 6, 2023
 *      Author: leonardo
 */

#include <stdio.h>

int main() {
    int value1 = 0, value2 = 0, result = 0;

    printf("Insira o valor para 1:\n");
    scanf("%d", &value1);
    printf("Insira o valor para 2:\n");
    scanf("%d", &value2);

    if (value1 == 0 || value2 == 0) {
        printf("Os valores não podem ser iguais a zero!\n");

    } else {
        result = value1 + value2;
        printf("O resultado é: %d\n", result);
    }

    getchar(); // Removido o fflush(stdin) que é considerado uma prática não segura
    return 0;
}

