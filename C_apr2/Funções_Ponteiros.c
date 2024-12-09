#include <stdio.h>

int conta_valor(char *string, char letra) {
    int contador = 0;
    
    while (*string != '\0') {
        if (*string == letra) {
            contador++;
        }
        string++;
    }
    
    return contador;
}

void troca_valor(char *string, char letra1, char letra2) {
    while (*string != '\0') {
        if (*string == letra1) {
            *string = letra2;
        }
        string++;
    }
}

int conta_maiores(int *vetor, int tamanho, int x) {
    int contador = 0;
    
    for (int indice = 0; indice < tamanho; indice++) {
        if (*(vetor + indice) > x) {
            contador++;
        }
    }
    
    return contador;
}

int main() {
    
    char string[100];
    char letra;
    
    printf("Digite uma string: ");
    scanf(" %[^\n]", string);
    
    printf("Digite uma letra para contar: ");
    scanf(" %c", &letra);
    
    printf("A letra '%c' aparece %d vezes na string.\n", letra, conta_valor(string, letra));
    
    char letra1, letra2;
    
    printf("Digite a letra que deseja trocar: ");
    scanf(" %c", &letra1);
    
    printf("Digite a nova letra: ");
    scanf(" %c", &letra2);
    
    troca_valor(string, letra1, letra2);
    
    printf("String após a troca: %s\n", string);
    
    int tamanho_vetor, x;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);
    
    int vetor[tamanho_vetor];
    
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    printf("Existem %d valores maiores que %d no vetor.\n", conta_maiores(vetor, tamanho_vetor, x), x);
    
    return 0;
}
