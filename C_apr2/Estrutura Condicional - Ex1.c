/*Faça um programa para implementar o jogo Pedra-Papel-Tesoura
(pessoa x computador) . O jogo deve ter 10 rodadas. A cada rodada,
deve ser informado quem venceu e o placar atual deve ser exibido a cada
rodada. Ao final das 10 rodadas, o programa informa o placar final e o
vencedor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	setbuf(stdout, NULL);

    int escolha_jogador, escolha_computador;
    int placar_jogador = 0, placar_computador = 0;

    srand(time(NULL));

    for (int rodada = 1; rodada <= 10; rodada++) {
        printf("Rodada %d\n", rodada);
        printf("Escolha uma opção (1: Pedra, 2: Papel, 3: Tesoura): ");
        scanf("%d", &escolha_jogador);

        if (escolha_jogador < 1 || escolha_jogador > 3) {
            printf("Escolha inválida! Tente novamente.\n");
            rodada--;
            continue;
        }

        escolha_computador = rand() % 3 + 1;

        if (escolha_jogador == 1) {
            printf("Você escolheu: Pedra\n");
        } else if (escolha_jogador == 2) {
            printf("Você escolheu: Papel\n");
        } else {
            printf("Você escolheu: Tesoura\n");
        }

        if (escolha_computador == 1) {
            printf("Computador escolheu: Pedra\n");
        } else if (escolha_computador == 2) {
            printf("Computador escolheu: Papel\n");
        } else {
            printf("Computador escolheu: Tesoura\n");
        }

        if (escolha_jogador == escolha_computador) {
            printf("Empate!\n");
        } else if ((escolha_jogador == 1 && escolha_computador == 3) ||
                   (escolha_jogador == 2 && escolha_computador == 1) ||
                   (escolha_jogador == 3 && escolha_computador == 2)) {
            printf("Você venceu a rodada!\n");
            placar_jogador++;
        } else {
            printf("Computador venceu a rodada!\n");
            placar_computador++;
        }

        printf("Placar: Você %d x %d Computador\n", placar_jogador, placar_computador);
        printf("---------------------------\n");
    }

    printf("Placar final: Você %d x %d Computador\n", placar_jogador, placar_computador);

    if (placar_jogador > placar_computador) {
        printf("Parabéns, você venceu!\n");
    } else if (placar_jogador < placar_computador) {
        printf("O computador venceu!\n");
    } else {
        printf("O jogo terminou em empate!\n");
    }

    return 0;
}
