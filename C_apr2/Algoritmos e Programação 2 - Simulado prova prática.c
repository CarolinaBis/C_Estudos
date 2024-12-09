#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//1. Defina o tipo Livro e o tipo Associado. 
typedef struct{
    int codigo;
    char nome[20]; 
    char autores[30]; 
    char tipo;
    int exemplares;
    int *disponibilidade; 
}livro; 

typedef struct{
    int codigo;
    char nome[20];
    char telefone[10];
}associado;

typedef struct {
    int quantidade;
    livro *livros[500]; 
} lista_livros;

typedef struct{
    int quantidade;
    associado *associados[300]; 
} lista_associados;

/*2. Escreva a função cadastrar_livro(), que lê as informações do livro e aloca espaço de
memória para armazenar as informações do livro. Após ler a informação sobre o número
de cópias, deve-se alocar o espaço necessário e inicializar todos com valor zero. A função
retorna o endereço do livro cadastrado.*/

livro* cadastrar_livro(){

    livro* novo_livro=(livro*)malloc(sizeof(livro));

    printf("Digite o código do livro: \n");
    scanf("%d%*c",&novo_livro->codigo);

    printf("Digite o nome do livro: \n");
    gets(novo_livro->nome);

    printf("Digite o nome do autor do livro: \n");
    gets(novo_livro->autores);

    printf("Digite o tipo do livro: \n");
    scanf("%c%*c", &novo_livro->tipo);

    printf("Digite a quantidade de exemplares: \n");
    scanf("%d%*c", &novo_livro->exemplares);

    novo_livro->disponibilidade=(int*)malloc(novo_livro->exemplares*sizeof(int));

    for(int tamanho=0; tamanho<novo_livro->exemplares; tamanho++){
        novo_livro->disponibilidade[tamanho]=0;
    }

    return novo_livro;
}

/*3. Escreva a função livros_por_tipo(lista_livros , tipo) que fornece um relatório contendo o
código, nome e quantidade de exemplares dos livros, de acordo com o tipo especificado.
*/

void livros_por_tipo(lista_livros*biblioteca, char tipo){
    for(int tamanho=0; tamanho<biblioteca->quantidade; tamanho++){
        if(biblioteca->livros[tamanho]->tipo ==tipo){
            printf("Código do livro: %d\n", biblioteca->livros[tamanho]->codigo);
            printf("Nome do livro: %s\n", biblioteca->livros[tamanho]->nome);
            printf("Quantidade de exemplares: %d\n", biblioteca->livros[tamanho]->exemplares);
        }
    }
}

/*4. Escreva a função exemplares_disponiveis(lista_livros, nome_livro) que retorna o número
de exemplares disponíveis para empréstimo de um determinado livro.*/

int exemplares_disponiveis(lista_livros*biblioteca, char *nome_livro){
    for(int tamanho=0; tamanho<biblioteca->quantidade; tamanho++){
        if(strcmp(nome_livro,biblioteca->livros[tamanho]->nome)==0){
            int disponiveis=0;
            for (int disponivel=0; disponivel<biblioteca->livros[tamanho]->exemplares; disponivel++){
                if(biblioteca->livros[tamanho]->disponibilidade[disponivel]==0){
                    disponiveis++;
                }
            }
        return disponiveis;    
        }
    }

return -1;
}

/*5. Escreva a função emprestimos(codigo_associado, pont_livros) que imprime o código e
nome dos livros que estão de posse de um determinado associado.*/

void emprestimos(int codigo_associado, lista_livros*biblioteca){
    printf("Livros em posse do associado: \n");
    for(int tamanho=0; tamanho<biblioteca->quantidade; tamanho++){
        for(int disponivel=0; disponivel<biblioteca->livros[tamanho]->exemplares; disponivel++){
            if(biblioteca->livros[tamanho]->disponibilidade[disponivel]==codigo_associado){
                printf("Código do livro: %d\n", biblioteca->livros[tamanho]->codigo);
                printf("Nome do livro: %s\n\n", biblioteca->livros[tamanho]->nome);
            }
        }
    }
}

/*6. Escreva o programa principal para testar as funcionalidades implementadas.*/

associado* cadastrar_associado() {
    associado* novo_associado = (associado*) malloc(sizeof(associado));
    if (novo_associado == NULL) {
        printf("Erro ao alocar memória para o associado.\n");
        return NULL;
    }

    printf("Digite o código do associado: ");
    scanf("%d", &novo_associado->codigo);
    getchar(); // Limpa o buffer do teclado
    printf("Digite o nome do associado: ");
    fgets(novo_associado->nome, sizeof(novo_associado->nome), stdin);
    novo_associado->nome[strcspn(novo_associado->nome, "\n")] = '\0'; // Remove o '\n'
    printf("Digite o telefone do associado: ");
    fgets(novo_associado->telefone, sizeof(novo_associado->telefone), stdin);
    novo_associado->telefone[strcspn(novo_associado->telefone, "\n")] = '\0'; // Remove o '\n'

    return novo_associado;
}

int main() {
    lista_livros biblioteca = {0};         // Inicializa a lista de livros
    lista_associados associados = {0};    // Inicializa a lista de associados

    // Cadastro de livros
    printf("Cadastrando livros...\n");
    for (int i = 0; i < 3; i++) { // Cadastro de 3 livros para teste
        livro* novo_livro = cadastrar_livro();
        if (novo_livro != NULL && biblioteca.quantidade < 500) {
            biblioteca.livros[biblioteca.quantidade++] = novo_livro;
        } else {
            printf("Erro ao cadastrar livro ou limite atingido.\n");
        }
    }

    // Cadastro de associados
    printf("\nCadastrando associados...\n");
    for (int i = 0; i < 2; i++) { // Cadastro de 2 associados para teste
        associado *novo_associado = cadastrar_associado();
        if (novo_associado != NULL && associados.quantidade < 300) {
            associados.associados[associados.quantidade++] = novo_associado;
        } else {
            printf("Erro ao cadastrar associado ou limite atingido.\n");
        }
    }

    // Listar livros por tipo
    char tipo;
    printf("\nDigite o tipo de livro para listar (A - Aventura, R - Romance, T - Terror): ");
    scanf(" %c", &tipo);
    livros_por_tipo(&biblioteca, tipo);

    // Consultar exemplares disponíveis
    char nome_livro[100];
    getchar();
    printf("\nDigite o nome do livro para verificar exemplares disponíveis: ");
    fgets(nome_livro, sizeof(nome_livro), stdin);
    nome_livro[strcspn(nome_livro, "\n")] = '\0';

    int disponiveis = exemplares_disponiveis(&biblioteca, nome_livro);
    if (disponiveis >= 0) {
        printf("Exemplares disponíveis de '%s': %d\n", nome_livro, disponiveis);
    } else {
        printf("Livro não encontrado.\n");
    }

    // Listar empréstimos de um associado
    int codigo_associado;
    printf("\nDigite o código do associado para verificar seus empréstimos: ");
    scanf("%d", &codigo_associado);
    emprestimos(codigo_associado, &biblioteca);

    return 0;
}
