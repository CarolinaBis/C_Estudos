//3. Faça um programa para calcular a área do círculo

#include <stdio.h>

int main(){
	setbuf(stdout,NULL);
	float pi = 3.14;
    float raio, area;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = pi * (raio*raio);


    printf("A área do círculo é %.2f\n", area);

    return 0;
}
