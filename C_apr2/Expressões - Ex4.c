//4. Faça um algoritmo que leia os pesos de provas P1, P2 e P3. Em seguida, leia 3 notas de um aluno e calcule a média ponderada do aluno.

#include <stdio.h>

int main() {
    float peso1, peso2, peso3;
    float nota1, nota2, nota3;
    float media_ponderada;

    printf("Digite o peso da P1: ");
    scanf("%f", &peso1);
    printf("Digite o peso da P2: ");
    scanf("%f", &peso2);
    printf("Digite o peso da P3: ");
    scanf("%f", &peso3);

    printf("Digite a nota da P1: ");
    scanf("%f", &nota1);
    printf("Digite a nota da P2: ");
    scanf("%f", &nota2);
    printf("Digite a nota da P3: ");
    scanf("%f", &nota3);

    media_ponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("A média ponderada do aluno é: %.2f\n", media_ponderada);

    return 0;
}
