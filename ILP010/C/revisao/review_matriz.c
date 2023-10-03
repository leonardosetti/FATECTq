#include <stdio.h>
#define DIM 100

//tipo 1 = linha tipo =2 coluna
void capturatamanho(int tipo)
{
    int valor;
    while (1 == 1)
    {
        if (tipo == 1)
        {
            printf('Numero de linhas da matriz: \n-->>');
        }
        else
        {
            printf('Numero de colunas da matriz: \n-->>');
        }
        scanf('%d, &valor');
        if (valor > DIM)
        {
            printf('Valor maior que o suportado');
        }
        else
        {
            break;
        }
        return (valor);
    }
}

int main()
{
    int matriz[DIM][DIM];
    int trow, tcol;
    int opc = 0;

    do
    {
        trow = capturatamanho(1);
        tcol = capturatamanho(2);

    } while (opc != 1);

    return 0;
}
