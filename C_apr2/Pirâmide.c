//Escreva um programa que leia um nome e escreva-o em forma de pirâmide

#include <stdio.h>
#include <string.h>

int main() {
	setbuf(stdout,NULL);

    char nome[100];
    int i, j, fim, inicio;

printf("Digite um nome: ");
scanf("%[^\n]s", nome);
inicio = strlen(nome) / 2;
fim = inicio;

    for (i = inicio; i >= 0; i--) {

        for (j = 0; j < inicio; j++) {
            printf(" ");
        }

        for (j = inicio; j <= fim; j++) {
            printf("%c", nome[j]);
        }

        inicio--;
        fim++;
        printf("\n");
    }

    return 0;
}
