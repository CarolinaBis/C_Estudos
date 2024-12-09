//5. Faça um programa que leia o código (inteiro) e salário de 5 funcionários e imprima o relatório com valores justificados à direita

#include <stdio.h>

int main() {
	setbuf(stdout,NULL);
    int codigo1, codigo2, codigo3, codigo4, codigo5;
    float primeiro_salario, segundo_salario, terceiro_salario, quarto_salario, quinto_salario;

    printf("Digite o código do 1º funcionário: ");
    scanf("%d", &codigo1);
    printf("Digite o salário do 1º funcionário: ");
    scanf("%f", &primeiro_salario);

    printf("Digite o código do 2º funcionário: ");
    scanf("%d", &codigo2);
    printf("Digite o salário do 2º funcionário: ");
    scanf("%f", &segundo_salario);

    printf("Digite o código do 3º funcionário: ");
    scanf("%d", &codigo3);
    printf("Digite o salário do 3º funcionário: ");
    scanf("%f", &terceiro_salario);

    printf("Digite o código do 4º funcionário: ");
    scanf("%d", &codigo4);
    printf("Digite o salário do 4º funcionário: ");
    scanf("%f", &quarto_salario);

    printf("Digite o código do 5º funcionário: ");
    scanf("%d", &codigo5);
    printf("Digite o salário do 5º funcionário: ");
    scanf("%f", &quinto_salario);

    printf("\nRelatório de Salários\n");
    printf("---------------------\n");
    printf("%-10s %10s\n", "Código", "Salário");
    printf("%-10d %10.2f\n", codigo1, primeiro_salario);
    printf("%-10d %10.2f\n", codigo2, segundo_salario);
    printf("%-10d %10.2f\n", codigo3, terceiro_salario);
    printf("%-10d %10.2f\n", codigo4, quarto_salario);
    printf("%-10d %10.2f\n", codigo5, quinto_salario);

    return 0;
}
