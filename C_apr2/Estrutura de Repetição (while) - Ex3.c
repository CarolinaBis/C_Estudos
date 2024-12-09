/*3. Escreva um programa que leia as notas dos alunos em uma prova. A entrada de dados termina ao entrar
com uma nota negativa. Imprimir:
Média da classe
Maior e menor nota
Quantidade de alunos com nota inferior a 3
% de alunos com nota superior a 8*/

#include <stdio.h>

int main() {
    setbuf(stdout, NULL);

    float nota;
    float soma_notas = 0.0;
    float maior_nota = -1.0;
    float menor_nota = 11.0;
    int alunos_inferior3 = 0;
    int alunos_superior8 = 0;
    int numero_notas = 0;

    printf("Digite as notas dos alunos (nota negativa para encerrar):\n");

    scanf("%f", &nota);
    while (nota >= 0) {
        soma_notas += nota;
        numero_notas++;

        if (nota > maior_nota) {
            maior_nota = nota;
        }

        if (nota < menor_nota) {
            menor_nota = nota;
        }

        if (nota < 3) {
            alunos_inferior3++;
        }

        if (nota > 8) {
            alunos_superior8++;
        }

        scanf("%f", &nota);
    }

    if (numero_notas > 0) {
        float media = soma_notas / numero_notas;
        float percentual_superior8 = ((float)alunos_superior8 / numero_notas) * 100;

        printf("Média da classe: %.2f\n", media);
        printf("Maior nota: %.2f\n", maior_nota);
        printf("Menor nota: %.2f\n", menor_nota);
        printf("Quantidade de alunos com nota inferior a 3: %d\n", alunos_inferior3);
        printf("%% de alunos com nota superior a 8: %.2f%%\n", percentual_superior8);
    } else {
        printf("Nenhuma nota válida foi inserida.\n");
    }

    return 0;
}

