#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reajuste;
    float salario;
    float salario_ajustado;
    float maior = 0;

    printf("\nInsira o valor do reajuste:\n");
    scanf("%f", &reajuste);

    reajuste = reajuste / 100;

    for(int i = 1; i <= 5; i++)
    {
        printf("\nInsira o salario que deseja ajustar: \n");
        scanf("%f", &salario);

        salario_ajustado = (salario * reajuste) + salario;

        printf("\nNovo salario: %.2f\n", salario_ajustado);

        if(salario_ajustado > maior)
        {
            maior = salario_ajustado;
        }
    }
    printf("\nO maior salario e: %.2f", maior);
}
