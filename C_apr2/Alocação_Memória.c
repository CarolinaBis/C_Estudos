#include <stdio.h>
#include <stdlib.h>

int* cria_vetor(int N) {
    int* vetor = (int*) malloc(N * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro na alocação de memória!\n");
        return NULL;
    }

    // Preenchendo o vetor com valores de exemplo (pode ser ajustado conforme necessário)
    for (int indice = 0; indice < N; indice++) {
        vetor[indice] = indice;  // Exemplo: preenche o vetor com valores de 0 a N-1
    }

    return vetor;
}

int main() {
    int N = 5;  // Tamanho do vetor
    int* vetor = cria_vetor(N);

    // Exibe o vetor gerado
    if (vetor != NULL) {
        for (int i = 0; i < N; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");

        // Libera a memória alocada
        free(vetor);
    }

    return 0;
}
