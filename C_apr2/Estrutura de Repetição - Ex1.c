//1 - Escreva um programa para encontrar a soma S = 3 + 6 + 9 + …. + 333.

#include <stdio.h>

int main() {
	setbuf(stdout, NULL);
    int s = 0;
    int i;

    for (i = 3; i <= 333; i += 3) {
        s += i;
    }

    printf("A soma S = %d\n", s);

    return 0;
}
