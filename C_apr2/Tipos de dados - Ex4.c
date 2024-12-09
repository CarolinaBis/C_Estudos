//4. Faça um programa que leia a idade de 4 pessoas e calcule a média

#include <stdio.h>

int main(){
    int primeira_idade, segunda_idade, terceira_idade, quarta_idade;
    float media;

    printf("Digite a primeira idade: ");
    scanf("%d", &primeira_idade);

    printf("Digite a segunda idade: ");
    scanf("%d", &segunda_idade);

    printf("Digite a terceira idade: ");
    scanf("%d", &terceira_idade);

    printf("Digite a quarta idade: ");
       scanf("%d", &quarta_idade);

    media = (primeira_idade + segunda_idade + terceira_idade + quarta_idade) / 4.0 ;

    printf("A média é %.2f\n", media);


    return 0;
}
