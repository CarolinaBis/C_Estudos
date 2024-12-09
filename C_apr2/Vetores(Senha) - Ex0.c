/*Implementar em Linguagem C o seguinte Jogo:
• São sorteados cinco números de 0 a 9 distintos
• O jogador deve acertar os números na ordem correta
• A cada jogada, o programa imprime
a) Um * para cada número certo no lugar certo
b) Um # para cada número certo no lugar errado
c) Adicione um espaço em branco para cada número errado
faça por posição dos número (em ordem)
• O jogo termina quando o jogador acertar o número ou o
número máximo de tentativas for esgotado
• Observações
• O programa deve imprimir primeiro todos os asteriscos
e depois os hashtags
• O programa não deve deixar o usuário digitar números
repetidos*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	setbuf(stdout, NULL);

    int numeros_secretos[5];
    int entrada_usuario[5];
    int tentativas = 0;
    int i, j;
    int usados[10] = {0};
    int numero_tentativas_max = 10;
    int quantidade_numeros = 5;

    srand(time(NULL));

    // Gerar números secretos distintos
    i = 0;
    while (i < quantidade_numeros) {
        int novo_num = rand() % 10;

        if (usados[novo_num] == 0) {
            numeros_secretos[i] = novo_num;
            usados[novo_num] = 1;
            i++;
        }
    }

    // Jogo
    while (tentativas < numero_tentativas_max) {
        int posicao_correta = 0;
        int numero_correto = 0;

        // Solicitar entrada do usuário
        printf("Tentativa %d: Insira %d numeros distintos entre 0 e 9: ", tentativas + 1, quantidade_numeros);

        // Reiniciar controle de números usados
        for (i = 0; i < 10; i++) {
            usados[i] = 0;
        }

        // Ler entrada do usuário e verificar se há números repetidos
        i = 0;
        int entrada_valida = 1;
        while (i < quantidade_numeros) {
            scanf("%d", &entrada_usuario[i]);
            if (usados[entrada_usuario[i]] == 1) {
                entrada_valida = 0;
            }
            usados[entrada_usuario[i]] = 1;
            i++;
        }

        if (!entrada_valida) {
            printf("Entrada invalida! Nao insira numeros repetidos.\n");
            continue;
        }

        // Verificar números na posição correta
        i = 0;
        while (i < quantidade_numeros) {
            if (entrada_usuario[i] == numeros_secretos[i]) {
                posicao_correta++;
            }
            i++;
        }

        // Verificar números corretos na posição errada
        i = 0;
        while (i < quantidade_numeros) {
            j = 0;
            while (j < quantidade_numeros) {
                if (i != j && entrada_usuario[i] == numeros_secretos[j]) {
                    numero_correto++;
                }
                j++;
            }
            i++;
        }

        // Imprimir resultado
        i = 0;
        while (i < posicao_correta) {
            printf("*");
            i++;
        }
        i = 0;
        while (i < numero_correto) {
            printf("#");
            i++;
        }
        printf("\n");

        // Verificar se o jogador acertou todos os números na posição correta
        if (posicao_correta == quantidade_numeros) {
            printf("Parabens! Voce acertou a sequencia.\n");
            break;
        }

        tentativas++;
    }

    if (tentativas == numero_tentativas_max) {
        printf("Voce atingiu o numero maximo de tentativas. A sequencia correta era: ");
        for (i = 0; i < quantidade_numeros; i++) {
            printf("%d", numeros_secretos[i]);
        }
        printf("\n");
    }

    return 0;
}
