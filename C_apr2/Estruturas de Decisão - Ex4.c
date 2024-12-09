/*4. Faça um programa que leia 2 notas de um
aluno, calcule a média e imprima aprovado ou
reprovado (para ser aprovado a média deve ser
no mínimo 6).*/

#include <stdio.h>

int main() {
    setbuf(stdout, NULL);

    float nota1, nota2;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    if (media >= 6) {
        printf("Aprovado.\n");
    } else {
        printf("Reprovado");
    }

    return 0;
}
