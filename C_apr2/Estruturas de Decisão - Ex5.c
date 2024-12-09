/*5. IMC significa Índice de Massa Corporal. Ele é
calculado dividindo o peso corporal (em
quilogramas) pelo quadrado da altura (em
metros). Faça um programa que leia o peso e a
altura de uma pessoa, calcule o IMC e
classifique, de acordo com a tabela de referência:*/

#include <stdio.h>

int main() {
    setbuf(stdout, NULL);

    float peso, altura, imc;

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Classificação: Peso normal\n");
    } else if (imc >= 25.0 && imc < 29.9) {
        printf("Classificação: Sobrepeso\n");
    } else if (imc >= 30.0 && imc < 34.9) {
        printf("Classificação: Obesidade grau 1\n");
    } else if (imc >= 35.0 && imc < 39.9) {
        printf("Classificação: Obesidade grau 2\n");
    } else {
        printf("Classificação: Obesidade grau 3 (mórbida)\n");
    }

    return 0;
}
