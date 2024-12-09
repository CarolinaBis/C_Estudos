//2. Faça um programa que leia 3 valores inteiros e calcule a soma e o produto

#include <stdio.h>

int main(){
    int primeiro_numero, segundo_numero, terceiro_numero, soma, produto;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &primeiro_numero);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &segundo_numero);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &terceiro_numero);

    soma = primeiro_numero + segundo_numero + terceiro_numero;
    produto = primeiro_numero * segundo_numero * terceiro_numero;

    printf("A soma é %d\n", soma);
    printf("O produto é %d\n", produto);

    return 0;
}
