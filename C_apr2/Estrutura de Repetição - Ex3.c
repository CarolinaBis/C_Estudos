//3 – Escreva um programa que leia um número de 1 a 10, e mostre a tabuada desse número.

#include <stdio.h>

int main() {
	setbuf(stdout, NULL);

    int numero;
    int x;

    printf("Digite um número de 1 a 10: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 10) {
           printf("Número inválido! Por favor, digite um número entre 1 e 10.\n");
           return 1;  // Encerra o programa com código de erro
       }

    printf("Tabuada do %d:\n", numero);
       for (x = 1; x <= 10; x++) {
           printf("%2d x %2d = %3d\n", numero, x, numero * x);
       }


    return 0;
}





