#include <stdio.h>
#define VALOR_MULTIPLO 4
int main(){
    int intervaloInicio, intervaloFinal;
    puts("--- QUADRADOS DOS MULTIPLOS ---");
    puts("Digite um dos limites do intervalo:");
    scanf("%d", &intervaloInicio);
    puts("Digite o outro limite do intervalo:");
    scanf("%d", &intervaloFinal);
    
    if(intervaloInicio > intervaloFinal){
        intervaloInicio = intervaloInicio ^ intervaloFinal;
        intervaloFinal = intervaloFinal ^ intervaloInicio;
        intervaloInicio = intervaloInicio ^ intervaloFinal;
    }

    printf("Multiplos de %d no intervalo [%d, %d]:\n", VALOR_MULTIPLO, intervaloInicio, intervaloFinal);
    for(int i = intervaloInicio; i <= intervaloFinal; i++){
        if(!(i%VALOR_MULTIPLO)) printf("Numero: %d - Quadrado: %d\n", i, i*i);
    }
    puts("");
    
    return 0;
}