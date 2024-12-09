/*2. Escreva um programa que leia idade, peso e altura de 10 pessoas. Calcular:
A média das idades
Quantidade de pessoas com mais de 60 Kg e altura inferior a 1,60m
//Porcentagem de pessoas entre 10 e 30 anos que medem mais de 1,70m*/

#include <stdio.h>

int main() {
	setbuf(stdout, NULL);
    int idade, i;
    float peso, altura;
    float soma_idades = 0.0;
    float soma_10e30anos_170m = 0.0;
    int total_10e30Anos = 0;
    int pessoas_60kg_160m = 0;

    printf("Digite a idade, peso e altura de 10 pessoas:\n");

    for (i = 0; i < 10; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Peso (kg): ");
        scanf("%f", &peso);
        printf("Altura (m): ");
        scanf("%f", &altura);

        soma_idades += idade;

        if (peso > 60.0 && altura < 1.60) {
        	pessoas_60kg_160m++;
        }

        if (idade >= 10 && idade <= 30) {
        	total_10e30Anos++;
            if (altura > 1.70) {
            	soma_10e30anos_170m++;
            }
        }
    }

    float media_idades = soma_idades / 10.0;


    float percentual_10e30Anos_170m = 0.0;
    if (total_10e30Anos > 0) {
        percentual_10e30Anos_170m = (soma_10e30anos_170m / total_10e30Anos) * 100;
    }

    printf("Média das idades: %.2f anos\n", media_idades);
    printf("Quantidade de pessoas com mais de 60 Kg e altura inferior a 1,60 m: %d\n", pessoas_60kg_160m);
    printf("Porcentagem de pessoas entre 10 e 30 anos que medem mais de 1,70 m: %.2f%%\n", percentual_10e30Anos_170m);

    return 0;
}
