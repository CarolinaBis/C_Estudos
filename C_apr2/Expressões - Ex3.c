//3. Faça um programa para leia um horário em segundos e transforme para o formato hh:mm:ss

#include <stdio.h>

int main() {
    int total_segundos, horas, minutos, segundos;

    printf("Digite o horário em segundos: ");
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600;

    minutos = (total_segundos % 3600) / 60;

    segundos = total_segundos % 60;

    printf("O horário em hh:mm:ss é %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}

