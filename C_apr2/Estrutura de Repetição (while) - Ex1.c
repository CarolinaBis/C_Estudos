/*1. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros
por ano. Faça um programa que calcule quantos anos serão necessários para que Zé seja maior que Chico.
#include <stdio.h>*/

int main() {

    float altura_chico = 1.50;
    float altura_ze = 1.10;
    float crescimento_chico = 0.02;
    float crescimento_ze = 0.03;
    int anos = 30;

    while (altura_ze <= altura_chico) {
        altura_chico += crescimento_chico;
        altura_ze += crescimento_ze;
        anos++;
    }

    printf("Número de anos necessários para que Zé seja maior que Chico: %d\n", anos);

    return 0;
}
