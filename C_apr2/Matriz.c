#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setbuf(stdout, NULL);

    int matriz[5][4];
    int transposta[4][5];
    int vetor[5];
    int i, j, maior_primeira_coluna = 0;

    srand(time(NULL));

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 50 + 1;
        }
    }

    printf("Matriz original:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 4; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            transposta[i][j] = matriz[j][i];
            printf("%2d ", transposta[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 5; i++) {
        vetor[i] = matriz[i][3];
    }

    for(i = 0; i < 5; i++) {
        if(matriz[i][0] > maior_primeira_coluna) {
            maior_primeira_coluna = matriz[i][0];
        }
    }

    for(j = 0; j < 4; j++) {
        matriz[4][j] *= maior_primeira_coluna;
    }

    printf("\nMatriz resultante:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 4; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nVetor da última coluna em ordem inversa:\n");
    for(i = 4; i >= 0; i--) {
        printf("%2d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
