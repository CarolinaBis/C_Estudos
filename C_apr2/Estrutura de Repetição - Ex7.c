//7. Faça um programa que apresenta o total da soma dos números pares até 100

#include <stdio.h>

int main() {
    setbuf(stdout, NULL);

    int soma = 0;

    for (int x = 0; x <= 100; x++) {
        if (x % 2 == 0) {
            soma += x;
        }
    }

    printf("A soma dos números pares de 0 até 100 é: %d\n", soma);

    return 0;
}
