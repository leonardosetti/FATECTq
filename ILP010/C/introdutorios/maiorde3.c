#include <stdio.h>
main()
{

        float num1, num2, num3, val0;

        printf("Digite um valor numerico\n");
        scanf("%d", &num1);
        printf("Digite um valor numerico\n", &num2);
        scanf("%d", &num2);
        printf("Digite um valor numerico\n", &num3);
        scanf("%d", &num3);

        if ((num1 > num2) && (num1 > num3))
        {
                val0 = num1;
        }
        else
        {
                if ((num2 > num1) && (num2 > num3))
                {
                        val0 = num2;
                }
                else
                {
                        val0 = num3;
                }
        }
        printf("\n", val0);
        return (0);
}
