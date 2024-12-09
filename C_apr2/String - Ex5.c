/*5) Escreva um programa que leia duas palavras e verifique se
são iguais (sem usar a função strcmp).*/

#include <stdio.h>

int main() {
	setbuf(stdout, NULL);
    char primeira_palavra[100];
    char segunda_palavra[100];
    int i, iguais = 1;

    printf("Digite a primeira palavra: ");
    scanf("%s", primeira_palavra);

    printf("Digite a segunda palavra: ");
    scanf("%s", segunda_palavra);

    for (i = 0; primeira_palavra[i] != '\0' || segunda_palavra[i] != '\0'; i++) {
        if (primeira_palavra[i] != segunda_palavra[i]) {
            iguais = 0;
            break;
        }
    }

    if (iguais) {
        printf("As palavras '%s' e '%s' são iguais.\n", primeira_palavra, segunda_palavra);
    } else {
        printf("As palavras '%s' e '%s' são diferentes.\n", primeira_palavra, segunda_palavra);
    }

    return 0;
}
