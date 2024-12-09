/*3. Tendo como dados de entrada a altura e o sexo
de uma pessoa, escreva um programa que
calcule e mostre seu peso ideal utilizando as
seguintes fórmulas:
• Para homens: 72.7 * altura – 58
• Para mulheres: 62.1*altura – 44.7*/

#include <stdio.h>

int main() {

    setbuf(stdout, NULL);

    float altura, peso_ideal;
    char sexo;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M para masculino / F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = 72.7 * altura - 58;
        printf("O peso ideal para um homem é: %.2f kg\n", peso_ideal);

    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = 62.1 * altura - 44.7;
        printf("O peso ideal para uma mulher é: %.2f kg\n", peso_ideal);

    } else {
        printf("Sexo inválido. Use 'M' para masculino ou 'F' para feminino.\n");
    }

    return 0;
}

