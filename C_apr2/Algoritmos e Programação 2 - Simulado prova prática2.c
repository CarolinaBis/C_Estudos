/*• O arquivo clima.dat contém dados meteorológicos em formato binário.
• Foram gravados 50 registros, onde o registro contém os seguintes campos:
o número do dia (int)
o temperatura máxima e temperatura mínima (float)
o umidade máxima e umidade mínima (int)
o pressão máxima e pressão mínima (float)
o velocidade do vento
Escreva um programa que leia as informações do arquivo e grave em um arquivo texto
chamado relatório.txt:
a) em que dias a temperatura máxima superou os 30 graus
b) quantidade de dias em que a diferença entre umidade máxima e mínima foi superior a
6
c) média da velocidade do vento nos 50 dias
d) menor pressão mínima atingida no período e o dia em que ocorreu*/

/*
#include <stdio.h>
#include <stdlib.h>

typedef struct{
int numero_dia;
float temperatura_maxima, temperatura_minima;
int umidade_maxima, umidade_minima;
float pressao_maxima, pressao_minima; 
float velocidade_vento;
} RegistroClima;

int main(){

    RegistroClima clima;

    int dias_temperatura_30 = 0;
    int quantidade_dias_diferenca_umidade = 0;
    float media_velocidade_vento = 0;
    float pressao_minima_dia = 0;
    float dia_menor_pressao_minima = 0;
    float soma = 0;

FILE *arquivo;
arquivo = fopen ("C:/Users/Carol de Jardim/Documents/C_apr2/clima.dat","rb");
    if (arquivo == NULL){
        printf("Falha ao abrir o arquivo");
        return 1;
    }

FILE *relatorio;
relatorio = fopen("Relatorio.txt", "wb");
    if (relatorio == NULL){
        printf("Falha ao abrir o arquivo");
        return 1;
    }

for(int ler_arquivo=0; ler_arquivo<50; ler_arquivo++){
        if (fread(&clima, sizeof(RegistroClima), 1, arquivo) != 1) {
            printf("Erro ao ler o registro %d.\n", ler_arquivo);
            fclose(arquivo);
            fclose(relatorio);
            return 1;
        }

    if(clima.temperatura_maxima>30.0)
    {
        dias_temperatura_30++;
    }

    if ((clima.umidade_maxima - clima.umidade_minima) > 6)
    {
            quantidade_dias_diferenca_umidade++;
    }

    soma+=clima.velocidade_vento;
    
    if (clima.pressao_minima > pressao_minima_dia)
    {
        pressao_minima_dia = clima.pressao_minima;
        dia_menor_pressao_minima = clima.numero_dia;
    }
    
}

fprintf(relatorio, "\nRelatório meteorológico:\n");
fprintf(relatorio,"Dia %d: Temperatura máxima:%f graus\n", clima.numero_dia, clima.temperatura_maxima);
fprintf(relatorio, "Dias com temperatura máxima acima de 30 graus: %d\n", dias_temperatura_30);
fprintf(relatorio, "Dias com diferença de umidade superior a 6: %d\n", quantidade_dias_diferenca_umidade);
fprintf(relatorio, "Média da velocidade do vento: %.2f m/s\n", soma/50);
fprintf(relatorio, "Menor pressão mínima: %.2f no dia %f\n", pressao_minima_dia, dia_menor_pressao_minima);
    
int fclose(arquivo);
int fclose(relatorio);

printf("Relatório gerado com sucesso em 'Relatorio.txt'");

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numero_dia;
    float temperatura_maxima, temperatura_minima;
    int umidade_maxima, umidade_minima;
    float pressao_maxima, pressao_minima;
    float velocidade_vento;
} RegistroClima;

int main() {
    RegistroClima clima;
    
    int dias_temperatura_30 = 0;
    int quantidade_dias_diferenca_umidade = 0;
    float soma_velocidade_vento = 0;
    float menor_pressao_minima = 1e6; // Um valor suficientemente alto
    int dia_menor_pressao_minima = 0;

    FILE *arquivo = fopen("C:/Users/Carol de Jardim/Documents/C_apr2/clima.dat", "rb");
    if (arquivo == NULL) {
        printf("Falha ao abrir o arquivo binário.\n");
        return 1;
    }

    FILE *relatorio = fopen("Relatorio.txt", "w");
    if (relatorio == NULL) {
        printf("Falha ao criar o arquivo de relatório.\n");
        fclose(arquivo);
        return 1;
    }

    for (int i = 0; i < 50; i++) {
        if (fread(&clima, sizeof(RegistroClima), 1, arquivo) != 1) {
            printf("Erro ao ler o registro %d.\n", i);
            fclose(arquivo);
            fclose(relatorio);
            return 1;
        }

        // a) Dias com temperatura máxima acima de 30 graus
        if (clima.temperatura_maxima > 30.0) {
            dias_temperatura_30++;
        }

        // b) Dias com diferença de umidade superior a 6
        if ((clima.umidade_maxima - clima.umidade_minima) > 6) {
            quantidade_dias_diferenca_umidade++;
        }

        // c) Acumular velocidade do vento
        soma_velocidade_vento += clima.velocidade_vento;

        // d) Menor pressão mínima
        if (clima.pressao_minima < menor_pressao_minima) {
            menor_pressao_minima = clima.pressao_minima;
            dia_menor_pressao_minima = clima.numero_dia;
        }
    }

    // Escrevendo o relatório
    fprintf(relatorio, "Relatório meteorológico:\n");
    fprintf(relatorio, "a) Dias com temperatura máxima acima de 30 graus: %d\n", dias_temperatura_30);
    fprintf(relatorio, "b) Dias com diferença de umidade superior a 6: %d\n", quantidade_dias_diferenca_umidade);
    fprintf(relatorio, "c) Média da velocidade do vento: %.2f m/s\n", soma_velocidade_vento / 50);
    fprintf(relatorio, "d) Menor pressão mínima: %.2f no dia %d\n", menor_pressao_minima, dia_menor_pressao_minima);

    fclose(arquivo);
    fclose(relatorio);

    printf("Relatório gerado com sucesso em 'Relatorio.txt'.\n");
    return 0;
}





