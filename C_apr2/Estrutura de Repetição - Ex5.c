//5. Faça um programa que leia dois números inteiros X e Y e imprima todos os números de X até Y.

#include <stdio.h>

int main() {
    setbuf(stdout, NULL);

    int numero_x, numero_y;

    printf("Digite o primeiro número inteiro (início): ");
    scanf("%d", &numero_x);

    printf("Digite o segundo número inteiro (final): ");
    scanf("%d", &numero_y);

    if (numero_x > numero_y) {
        printf("O primeiro número deve ser menor ou igual ao segundo número.\n");
        return 1;
    }

    for (int x = numero_x; x <= numero_y; x++) {
        printf("%d ", x);
    }

    printf("\n");

    return 0;
}

