//1. Obtenha um número. Depois, se o número for par exibir o seu dobro, caso contrário, exibir o seu triplo.

#include <stdio.h>

int main() {
    setbuf(stdout, NULL);

    int numero;
    int resultado;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        resultado = numero * 2;
        printf("O número é par. O dobro de %d é %d.\n", numero, resultado);
    } else {
        resultado = numero * 3;
        printf("O número é ímpar. O triplo de %d é %d.\n", numero, resultado);
    }

    return 0;
}
