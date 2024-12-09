//4. Faça um programa que leia um número inteiro N e imprima todos os números de 1 até N.

#include <stdio.h>

int main() {
    setbuf(stdout, NULL);

    int numero;
    int x;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    for (x = 1; x <= numero; x++) {
        printf("%d ", x);
    }

    printf("\n");

    return 0;
}
