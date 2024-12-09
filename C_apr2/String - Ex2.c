/*2) Escreva um programa que leia um nome e imprima as 4
primeiras letras.*/

#include <stdio.h>

int main() {
	setbuf(stdout, NULL);
    char nome[100];
    int i;

    printf("Digite um nome: ");
    scanf("%s", nome);

    printf("As 4 primeiras letras sao: ");

    for (i = 0; i < 4; i++) {
        printf("%c", nome[i]);
    }
    printf("\n");

    return 0;
}
