#include<stdio.h>
#include<stdlib.h>

//1. Defina o tipo Livro e o tipo Associado. 
typedef struct 
{
    int codigo; 
    char nome[20];
    char autores[20];
    char tipo[1];
    int exemplares;
    int *disponibilidade;
}livro;

typedef struct 
{
    int codigo; 
    char nome[20];
    char telefone[20];
}associado;

typedef struct 
{
int quantidade;
livro *livros[500]; 
}lista_livros;

typedef struct
{
int quantidade;
associado *associados[300]; 
}lista_associados;

/*2. Escreva a função cadastrar_livro(), que lê as informações do livro e aloca espaço de
memória para armazenar as informações do livro. Após ler a informação sobre o número
de cópias, deve-se alocar o espaço necessário e inicializar todos com valor zero. A função
retorna o endereço do livro cadastrado.*/

livro* cadastro_livro(){
    livro* novo_livro=(livro*)malloc(sizeof(livro));

    printf("Digite o código do livro: \n");
    scanf("%d%*c", &novo_livro->codigo);

    printf("Digite o nome do livro: \n");
    gets(novo_livro->nome);

    printf("Digite o nome do autor: \n");
    gets(novo_livro->autores);

    printf("Digite o tipo: (a)ventura/ (r)omance/(t)error: \n");
    scanf("%c%*c", &novo_livro->tipo);

    printf("Digite a quantidade de exemplares: \n");
    scanf("%d%*c", &novo_livro->exemplares);

    novo_livro->disponibilidade=(int*)malloc(novo_livro->exemplares* sizeof(int));

    for(int tamanho=0;tamanho>novo_livro->exemplares;tamanho++){
        novo_livro->disponibilidade[tamanho]=0;
    }


    return novo_livro;
}

/*3. Escreva a função livros_por_tipo(lista_livros , tipo) que fornece um relatório contendo o
código, nome e quantidade de exemplares dos livros, de acordo com o tipo especificado*/

void livros_por_tipo(lista_livros*biblioteca, char tipo){
    printf("Relatório:");
    for (int tamanho=0; tamanho<biblioteca->quantidade;tamanho++){
        if(biblioteca->livros[tamanho]->tipo==tipo){
            printf("Código: %d\n", biblioteca->livros[tamanho]->codigo);
            printf("Nome: %d\n", biblioteca->livros[tamanho]->nome);
            printf("Quantidade de exemplares: %d\n", biblioteca->livros[tamanho]->exemplares);
        }
    }
}

/*4. Escreva a função exemplares_disponiveis(lista_livros, nome_livro) que retorna o número
de exemplares disponíveis para empréstimo de um determinado livro.*/

int exemplares_disponiveis(lista_livros*biblioteca, char nome_livro){
    for (int tamanho = 0; tamanho < biblioteca->quantidade; tamanho++){
        if(strcmp(nome_livro, biblioteca->livros[tamanho]->nome == 0)){
            int disponiveis = 0;
            for (int disponivel=0; disponivel<biblioteca->livros[tamanho]->exemplares; disponivel++){
                if(biblioteca->livros[tamanho]->disponibilidade == 0){
                    disponiveis++;
                }
            }
            return disponiveis;
        }
    }
    
    return 0;
}

/*5. Escreva a função emprestimos(codigo_associado, pont_livros) que imprime o código e
nome dos livros que estão de posse de um determinado associado. */

void emprestimos(int codigo_associado, lista_livros*biblioteca){
    for (int tamanho=0; tamanho<biblioteca->quantidade;tamanho++){
        for(int disponivel=0;disponivel<biblioteca->livros[tamanho]->exemplares;disponivel++){
            if(biblioteca->livros[tamanho]->disponibilidade[disponivel] == codigo_associado){
                printf("O código do livro: %d", biblioteca->livros[tamanho]->codigo);    
                printf("O nome do livro: %d", biblioteca->livros[tamanho]->nome);  
            }
        }
    }
}

/*6. Escreva o programa principal para testar as funcionalidades implementadas.*/
int main(){
    
}



