//6. Faça um programa que apresenta o total da soma dos números de 0 até 100

#include <stdio.h>

int main() {
    setbuf(stdout, NULL);

    int soma = 0;
    int x;

    for (x = 0; x <= 100; x++) {
        soma += x;
    }

    printf("A soma dos números de 0 até 100 é: %d\n", soma);

    return 0;
}

