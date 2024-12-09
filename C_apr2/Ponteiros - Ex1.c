#include <stdio.h>

void le_vetor(int *vetor, int tamanho) {
    for(int indice = 0; indice<tamanho; indice++){
        printf("Digite o elemento %d: ", indice+1);
        scanf("%d", (vetor+indice));
    }
}

int main(){
    int tamanho_vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);
    int vetor[tamanho_vetor];

    le_vetor(vetor, tamanho_vetor);

    printf("A soma dos elementos do vetor é: %d\n", soma_vetor(vetor, tamanho_vetor));

    char string[100];

    printf("Digite uma string: ");
    scanf(" %[^\n]", string);

    printf("A string digitada é: ");
    imprime_string(string);
}