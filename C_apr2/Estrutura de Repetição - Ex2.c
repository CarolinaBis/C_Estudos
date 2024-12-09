//2 – Escreva um programa que leia a nota de 10 alunos e calcule a média da classe.

#include <stdio.h>

int main() {
	setbuf(stdout, NULL);

    int x;
    float nota;
    float media;
    float soma = 0.0;
    int aluno = 10;

    for (x = 1; x <= aluno; x += 1) {
        printf("Digite a nota do aluno %d: ", x);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma/aluno;

    printf("A média da classe é: %.2f\n", media);

    return 0;
}
