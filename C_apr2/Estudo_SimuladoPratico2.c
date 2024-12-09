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

#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    int numero_dia;
    float temperatura_maxima, temperatura_minima; 
    int umidade_maxima, umidade_minima;
    float pressao_maxima, pressao_minima;
    float velocidade_vento;
    
}registro;

int main(){

    registro clima;

    int temperatura_superior_30;
    int quantidade_diferenca_umidade_6;

FILE * arquivo;
arquivo = fopen("C:/Users/Carol de Jardim/Documents/C_apr2/clima.dat", "rb");
    if(arquivo == NULL){
        printf("ERRO");
        return 1;
    }

FILE * relatorio;
relatorio = fopen("Relatorio.txt", "wb");
    if(arquivo == NULL){
        printf("ERRO");
        return 1;
    }

for(int ler_arquivo=0;ler_arquivo<50;ler_arquivo++){
      if (fread(&clima, sizeof(registro), 1, arquivo) != 1) {
            printf("Erro ao ler o registro %d.\n", ler_arquivo);
            fclose(arquivo);
            fclose(relatorio);
            return 1;
        }

    if(clima.temperatura_maxima>30){

    }

}


fclose (arquivo);
fclose (relatorio);

}

