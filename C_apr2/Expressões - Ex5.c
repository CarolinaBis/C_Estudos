//5. Faça um programa que receba nome do funcionário, o salário atual, o percentual dereajuste (em %) e apresenta o valor do aumento e novo salário após reajuste.
#include <stdio.h>

int main() {
    char nome[50];
    float salario_atual, percentual_reajuste;
    float valor_aumento, novo_salario;

    printf("Digite o nome do funcionário: ");
    scanf("%s", nome);

    printf("Digite o salário atual: ");
    scanf("%f", &salario_atual);

    printf("Digite o percentual de reajuste (em %%): ");
    scanf("%f", &percentual_reajuste);

    valor_aumento = salario_atual * (percentual_reajuste / 100);

    novo_salario = salario_atual + valor_aumento;

    printf("Nome do funcionário: %s\n", nome);
    printf("Valor do aumento: %.2f\n", valor_aumento);
    printf("Novo salário: %.2f\n", novo_salario);

    return 0;
}
