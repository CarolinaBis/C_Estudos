/*3. Faça um programa que leia um vetor com notas de uma classe de 10
alunos. Em seguida, separe os valores em dois outros vetores. O
primeiro vetor deve conter as notas abaixo da média (<6) e o
segundo deve conter as notas que estão na média ou acima.*/

#include <stdio.h>

int main() {
	setbuf(stdout,NULL);
    float notas[10];
    float notasAbaixo[10], notasAcima[10];
    int i, abaixo = 0, acima = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for(i = 0; i < 10; i++) {
        if(notas[i] < 6) {
            notasAbaixo[abaixo] = notas[i];
            abaixo++;
        } else {
            notasAcima[acima] = notas[i];
            acima++;
        }
    }


    printf("\nNotas abaixo da média:\n");
    for(i = 0; i < abaixo; i++) {
        printf("%.2f\n", notasAbaixo[i]);
    }

    printf("\nNotas na média ou acima:\n");
    for(i = 0; i < acima; i++) {
        printf("%.2f\n", notasAcima[i]);
    }

    return 0;
}

