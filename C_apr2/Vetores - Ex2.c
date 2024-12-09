/*2. Escreva um programa que leia um vetor de tamanho 8 e imprima os
valores em ordem inversa*/

#include <stdio.h>

int main() {
	setbuf(stdout,NULL);
    int vetor[8];
    int i;

    for(i = 0; i < 8; i++) {
        printf("Digite o valor para a posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores em ordem inversa:\n");
    for(i = 7; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
