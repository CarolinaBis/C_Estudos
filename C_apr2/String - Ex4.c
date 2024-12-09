/*4) Escreva um programa que leia uma frase e uma letra. Informe
quantas vezes a letra aparece na frase.*/

#include <stdio.h>

int main() {
	setbuf(stdout, NULL);
    char frase[100];
    char letra;
    int i, contador = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]s", frase);

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == letra) {
            contador++;
        }
    }

    printf("A letra '%c' aparece %d vezes na frase.\n", letra, contador);

    return 0;
}
