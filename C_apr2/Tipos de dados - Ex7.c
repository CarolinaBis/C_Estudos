//7. Faça um programa para calcular as raízes de uma equação do 1º grau (ax + b = 0)

#include <stdio.h>

int main() {
    float a, b, x;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("A equação tem infinitas soluções.\n");
        } else {
            printf("A equação não tem solução.\n");
        }
    } else {

        x = -b / a;
        printf("A raiz da equação %.2fx + %.2f = 0 é x = %.2f\n", a, b, x);
    }

    return 0;
}
