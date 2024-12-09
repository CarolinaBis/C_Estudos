/*7) Faça uma função que receba um nome e mostre-o na
vertical e em formato de escada*/

#include <stdio.h>

int exibirVertical(char nome[]) {
    int i = 0;

    while (nome[i] != '\0') {
        printf("%c\n", nome[i]);
        i++;
    }
    return 0;
}

int exibirEscada(char nome[]) {
    int i, j;

    for (i = 0; nome[i] != '\0'; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c", nome[j]);
        }
        printf("\n");
    }
    return 0;
}

int main() {
	setbuf(stdout,NULL);
    char nome[100];

    printf("Digite um nome: ");
    scanf("%s", nome);

    printf("\nNome na vertical:\n");
    exibirVertical(nome);

    printf("\nNome em formato de escada:\n");
    exibirEscada(nome);

    return 0;
}
