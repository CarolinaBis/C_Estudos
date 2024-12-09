/*2. Obtenha um número. Depois, se o número for
divisível por 10, exibir a metade dele, caso
contrário, exibir a mensagem “O número digitado
não é múltiplo de 10”.*/

#include <stdio.h>

int main() {
    setbuf(stdout, NULL);

    int numero;
    int resultado;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 10 == 0) {
        resultado = numero/2;
        printf("O número é divisível por 10. A metade de %d é %d.\n", numero, resultado);
    } else {
        printf("O número digitado não é múltiplo de 10");
    }

    return 0;
}
