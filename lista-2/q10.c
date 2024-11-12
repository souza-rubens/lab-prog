#include <stdio.h>
#define INTERVALO_INICIO 15
#define INTERVALO_FINAL 90
#define VALOR_MULTIPLO 4

int main(){
    puts("--- QUADRADOS DOS MULTIPLOS ---");
    printf("Multiplos de %d no intervalo [%d, %d]:\n", VALOR_MULTIPLO, INTERVALO_INICIO, INTERVALO_FINAL);
    for(int i = INTERVALO_INICIO; i <= INTERVALO_FINAL; i++){
        if(!(i%VALOR_MULTIPLO)) printf("Numero: %d - Quadrado: %d\n", i, i*i);
    }

    return 0;
}