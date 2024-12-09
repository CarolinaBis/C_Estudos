/*8- Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e
cresce 3 centímetros por ano. Faça um programa que imprima a altura de cada um ano a
ano durante 30 anos.*/

#include <stdio.h>

int main() {

    float altura_chico = 1.50;
    float altura_ze = 1.10;
    float crescimento_chico = 0.02;
    float crescimento_ze = 0.03;
    int anos = 30;

    printf("Ano\tAltura Chico (m)\tAltura Zé (m)\n");


    for (int ano = 1; ano <= anos; ano++) {

        printf("%d\t%.2f\t\t\t%.2f\n", ano, altura_chico, altura_ze);

        altura_chico += crescimento_chico;
        altura_ze += crescimento_ze;
    }

    return 0;
}
