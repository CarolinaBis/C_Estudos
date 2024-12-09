#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    int codigo;
    float nota1, nota2;
    int faltas;
};

struct Aluno lerAluno() {
    struct Aluno aluno;
    printf("Informe o código do aluno: ");
    scanf("%d", &aluno.codigo);
    printf("Informe a primeira nota: ");
    scanf("%f", &aluno.nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &aluno.nota2);
    printf("Informe o número de faltas: ");
    scanf("%d", &aluno.faltas);
    return aluno;
}

struct Aluno* lerTurma(int tamanho) {
    struct Aluno* turma = (struct Aluno*)malloc(tamanho * sizeof(struct Aluno));
    for (int i = 0; i < tamanho; i++) {
        printf("\nAluno %d:\n", i + 1);
        turma[i] = lerAluno();
    }
    return turma;
}

float calcularMedia(struct Aluno aluno) {
    return (aluno.nota1 + aluno.nota2) / 2.0;
}

char calcularConceito(float media, int faltas) {
    if (faltas > 20) return 'F';
    if (media >= 8.0) return 'A';
    if (media >= 6.0) return 'B';
    if (media >= 4.0) return 'C';
    return 'D';
}

void exibirRelatorio(struct Aluno* turma, int tamanho) {
    printf("\nRelatório da turma:\n");
    printf("Código\tMédia\tConceito\n");
    for (int i = 0; i < tamanho; i++) {
        float media = calcularMedia(turma[i]);
        char conceito = calcularConceito(media, turma[i].faltas);
        printf("%d\t%.2f\t%c\n", turma[i].codigo, media, conceito);
    }
}

int main() {
    int numTurmas;
    do {
        printf("Digite o número de turmas (máximo 10): ");
        scanf("%d", &numTurmas);
    } while (numTurmas < 1 || numTurmas > 10);

    struct Aluno* turmas[10]; 
    int tamanhos[10];         

    for (int i = 0; i < numTurmas; i++) {
        printf("\nDigite o tamanho da turma %d: ", i + 1);
        scanf("%d", &tamanhos[i]);
        turmas[i] = lerTurma(tamanhos[i]);
    }

    for (int i = 0; i < numTurmas; i++) {
        printf("\nRelatório da turma %d\n", i + 1);
        exibirRelatorio(turmas[i], tamanhos[i]);
    }

    return 0;
}
