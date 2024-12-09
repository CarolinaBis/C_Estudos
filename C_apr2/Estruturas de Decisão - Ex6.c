/*6. Faça um programa que implemente o jogo
jokenpô (pedra-papel-tesoura). A escolha do
computador deve ser feita através de sorteio.
Função rand() – Biblioteca stdlib.h
• Gera um número inteiro entre 0 e 32767
• Para gerar em outro intervalo, utiliza-se resto da
divisão e soma/subtração
• Exemplos
a) gerar um número entre 0 e 15:
 X = rand() % 16
b) gerar um número entre -7 e 23:
 X = rand() % 31 - 7;
→Para iniciar o gerador de aleatórios:
 srand(time(0))
time(N) → retorna tempo em segundos a partir de um
valor N. (N=0 significa 01/01/1970) (biblioteca time.h)*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setbuf(stdout, NULL);

    srand(time(0));

    int escolha_usuario;
    int escolha_computador;

    printf("Escolha uma opção:\n");
    printf("0 - Pedra\n");
    printf("1 - Papel\n");
    printf("2 - Tesoura\n");
    printf("Digite sua escolha (0, 1 ou 2): ");
    scanf("%d", &escolha_usuario);

    if (escolha_usuario < 0 || escolha_usuario > 2) {
        printf("Escolha inválida. Por favor, escolha 0, 1 ou 2.\n");
    }

    escolha_computador = rand() % 3;

    printf("Você escolheu: ");
    switch (escolha_usuario) {
        case 0: printf("Pedra\n"); break;
        case 1: printf("Papel\n"); break;
        case 2: printf("Tesoura\n"); break;
    }

    printf("O computador escolheu: ");
    switch (escolha_computador) {
        case 0: printf("Pedra\n"); break;
        case 1: printf("Papel\n"); break;
        case 2: printf("Tesoura\n"); break;
    }

    if (escolha_usuario == escolha_computador) {
        printf("Empate!\n");
    } else if ((escolha_usuario == 0 && escolha_computador == 2) ||
               (escolha_usuario == 1 && escolha_computador == 0) ||
               (escolha_usuario == 2 && escolha_computador == 1)) {
        printf("Você ganhou!\n");
    } else {
        printf("Você perdeu!\n");
    }

    return 0;
}
