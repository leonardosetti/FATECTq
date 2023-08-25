#include <stdio.h>
#define corte 6

int main()
{
    float nota1, nota2, media_f;
    printf("\nAlgoritmo c");
    printf("\nCalculo media aprovacao de aluno\n");
    printf("\nInforme a primeira nota do Aluno\n");
    scanf("%f%*c", &nota1);
    printf("\nInforme a segunda nota do Aluno\n");
    scanf("%f%*c", &nota2);
    media_f = (nota1 + nota2) / 2;
    if (media_f >= corte)
    {
        printf("\nAluno foi APROVADO! Media: %3.2f\n", media_f);
    }
    else
    {
        printf("\nAluno foi REPROVADO! Media: %3.2f\n", media_f);
    }
    getchar();
    return 0;
}