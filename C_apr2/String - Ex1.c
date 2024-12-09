#include <stdio.h>
#include <string.h>

int main() {
	setbuf(stdout, NULL);
    char palavra[100];
    int i, tamanho, palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    // Verifica se a palavra é um palíndromo
    for (i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            palindromo = 0; // Se encontrar caracteres diferentes, não é um palíndromo
            break;
        }
    }

    if (palindromo) {
        printf("A palavra '%s' é um palíndromo.\n", palavra);
    } else {
        printf("A palavra '%s' não é um palíndromo.\n", palavra);
    }

    return 0;
}

