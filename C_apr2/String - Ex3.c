/*3) Escreva um programa que leia uma palavra e informe seu
tamanho (sem usar a função len).
 */

#include <stdio.h>

int main() {
	setbuf(stdout, NULL);
    char palavra[100];
    int tamanho = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    while (palavra[tamanho] != '\0') {
            tamanho++;
        }

        printf("O tamanho da palavra '%s' é: %d\n", palavra, tamanho);

        return 0;
    }
