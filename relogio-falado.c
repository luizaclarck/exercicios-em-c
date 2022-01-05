#include <stdio.h>
#include <locale.h>

#define NOME "Luiza"

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int hora;

    printf ("Insira o horário desejado:\n");
    scanf ("%d", &hora);

    if (hora >= 0 && hora < 12) {
        printf ("\nBom dia, %s", NOME);
    }

    else if (hora >= 12 && hora < 18) {
        printf ("\nBoa tarde, %s", NOME);
    }

    else if (hora >= 18 && hora <= 23) {
        printf ("\nBoa noite, %s", NOME);
    }

    else {
        printf ("\nHorário inválido, %s", NOME);
    }

    return 0;
}
