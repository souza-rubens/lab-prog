#include <stdio.h>

int main(){
    int horas, minutos, segundos, totalSegundos;
    printf("Digite o total de horas, minutos e segundos:\n");
    printf("Horas: ");
    scanf("%d", &horas);
    printf("Minutos: ");
    scanf("%d", &minutos);
    printf("Segundos: ");
    scanf("%d", &segundos);

    totalSegundos = horas * 3600 + minutos * 60 + segundos;
    printf("Total de segundos: %d", totalSegundos);

    return 0;
}