//6. Faça um programa para converter números de formato decimal para hexadecimal

#include <stdio.h>

int main() {
    int numero_decimal;

    printf("Digite um número decimal: ");
    scanf("%d", &numero_decimal);

    printf("Número em hexadecimal: %X\n", numero_decimal);

    return 0;
}
