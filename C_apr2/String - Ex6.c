/*6) Faça um programa que leia o nome e o sobrenome de
uma pessoa separadamente. O programa deve juntar as
duas strings em uma só e escrever na tela: a nova
string, o seu número de caracteres, a sua primeira e a
última letra.*/

#include <stdio.h>

int main() {
	setbuf(stdout,NULL);
    char nome[50];
    char sobrenome[50];
    char nome_completo[100];
    int i, j;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sobrenome: ");
    scanf("%s", sobrenome);

    for (i = 0; nome[i] != '\0'; i++) {
        nome_completo[i] = nome[i];
    }

    nome_completo[i] = ' ';
    i++;

    for (j = 0; sobrenome[j] != '\0'; j++) {
        nome_completo[i + j] = sobrenome[j];
    }
    nome_completo[i + j] = '\0';

    printf("Nome completo: %s\n", nome_completo);

    int tamanho = i + j;
    printf("Número de caracteres: %d\n", tamanho);

    if (tamanho > 0) {
        printf("Primeira letra: %c\n", nome_completo[0]);
        printf("Última letra: %c\n", nome_completo[tamanho - 1]);
    }

    return 0;
}
