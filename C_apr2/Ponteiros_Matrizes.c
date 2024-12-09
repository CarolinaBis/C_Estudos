/*Um loja possui diversos produtos e vendedores. Escreva um programa que leia a
quantidade de vendedores e de produtos e crie com alocação dinâmica :
• um vetor para armazenar o nome dos vendedores
• uma matriz para armazenar, para cada vendedor, a quantidade vendida de
cada produto.
Em seguida, o programa deve permitir a leitura da quantidade vendida de cada
produto para cada um dos vendedores e imprimir:
• total de produtos vendidos por vendedor
• quantidade vendida de cada produto
• quantidade total de produtos vendidos no mês.
• nome do vendedor que mais vendeu.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num_vendedores, num_produtos;
    int i, j, vendedor_mais_vendeu = 0, total_vendido, total_geral = 0;
    
    printf("Digite a quantidade de vendedores: ");
    scanf("%d", &num_vendedores);
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &num_produtos);

    char **vendedores = (char **)malloc(num_vendedores * sizeof(char *));
    for (i = 0; i < num_vendedores; i++) {
        vendedores[i] = (char *)malloc(50 * sizeof(char)); 
        printf("Digite o nome do vendedor %d: ", i + 1);
        scanf("%s", vendedores[i]);
    }

    int **vendas = (int **)malloc(num_vendedores * sizeof(int *));
    for (i = 0; i < num_vendedores; i++) {
        vendas[i] = (int *)malloc(num_produtos * sizeof(int));
    }

    for (i = 0; i < num_vendedores; i++) {
        printf("Quantidade vendida por %s:\n", vendedores[i]);
        for (j = 0; j < num_produtos; j++) {
            printf("Produto %d: ", j + 1);
            scanf("%d", &vendas[i][j]);
        }
    }


    printf("\nTotal de produtos vendidos por vendedor:\n");
    int max_vendas = 0;
    for (i = 0; i < num_vendedores; i++) {
        total_vendido = 0;
        for (j = 0; j < num_produtos; j++) {
            total_vendido += vendas[i][j];
        }
        printf("%s: %d\n", vendedores[i], total_vendido);
        
        if (total_vendido > max_vendas) {
            max_vendas = total_vendido;
            vendedor_mais_vendeu = i;
        }
        total_geral += total_vendido;
    }

    printf("\nQuantidade vendida de cada produto:\n");
    for (j = 0; j < num_produtos; j++) {
        int total_produto = 0;
        for (i = 0; i < num_vendedores; i++) {
            total_produto += vendas[i][j];
        }
        printf("Produto %d: %d\n", j + 1, total_produto);
    }

    printf("\nQuantidade total de produtos vendidos no mês: %d\n", total_geral);
    printf("Vendedor que mais vendeu: %s\n", vendedores[vendedor_mais_vendeu]);

    return 0;
}
