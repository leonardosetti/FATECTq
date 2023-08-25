#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, t, opc=-1;


    printf("Informe o numero desejado para gerar a tabuada correspondente:\n");


      while (opc!=0)
    {
system ("cls");
    scanf("%d", &t);
printf("Tabuada do %d\n",t);
printf("_____________________\n");

        for (i = 1; i <= 10; i++)
        {
            printf("\n%d * %d = %d", i, t, (i * t));
        }
printf("\n_____________________\n");
        printf("Deseja contionuar calculando? Digite 0 para sair\n");
        scanf("%d", &opc);
    }

    return (0);
}
