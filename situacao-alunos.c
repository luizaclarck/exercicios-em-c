#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1;
    float nota2;
    float nota3;
    float media;

    for(int i = 1; i <= 40; i++)
    {
        printf("\nInsira a primeira nota do aluno: \n");
        scanf("%f", &nota1);

        printf("Insira a segunda nota do aluno: \n");
        scanf("%f", &nota2);

        printf("Insira a terceira nota do aluno: \n");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        if(media >= 7)
        {
            printf("Media = %f \nAluno aprovado!\n", media);
        }
        else
        {
            printf("Media = %f \nAluno reprovado!\n", media);
        }
    }
}
