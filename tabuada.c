#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha;

    do {
        printf("Menu\n");
        printf("1 - Digite 1 para escolher um numero\n");
        printf("2 - Digite 2 para sair\n");
        scanf("%d", &escolha);

        if(escolha == 1) {
            int numero;

            printf("Digite o numero da tabuada que deseja saber\n");
            scanf("%d", &numero);

            for (int cont = 1; cont <= 10; cont++) {
                printf("%d * %d = %d\n", numero, cont, numero * cont);
            }
        }
        else if(escolha == 2) {
            printf("\nFim, bons estudos!\n");
            break;
        }
        else {
            printf("\nOpcao invalida\n\n");
        }
    } while(escolha != 2);

    return 0;
}
