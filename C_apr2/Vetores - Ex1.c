/*1- Escreva um programa que leia um vetor com notas de uma classe de
10 alunos. Em seguida, calcule a média e imprima:
a) Valor da média
b) notas abaixo da média
c) Notas acima da média*/

#include <stdio.h>

int main() {
	setbuf(stdout,NULL);
    int i;
    float notas[10], soma = 0, media;

    for(i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10;

    printf("\nValor da média: %.2f\n", media);

    printf("Notas abaixo da média:\n");
    for(i = 0; i < 10; i++) {
        if(notas[i] < media) {
            printf("%.2f\n", notas[i]);
        }
    }

    printf("Notas acima da média:\n");
    for(i = 0; i < 10; i++) {
        if(notas[i] > media) {
            printf("%.2f\n", notas[i]);
        }
    }

    return 0;
}
