#include <stdio.h>
#define VALOR_MULTIPLO 3

int main(){
    int intervaloInicio, intervaloFinal, qtdMultiplos = 0;
    puts("--- QUANTIDADE DOS MULTIPLOS ---");
    puts("Digite um dos limites do intervalo:");
    scanf("%d", &intervaloInicio);
    puts("Digite o outro limite do intervalo:");
    scanf("%d", &intervaloFinal);
    
    if(intervaloInicio > intervaloFinal){
        intervaloInicio = intervaloInicio ^ intervaloFinal;
        intervaloFinal = intervaloFinal ^ intervaloInicio;
        intervaloInicio = intervaloInicio ^ intervaloFinal;
    }
    
    for(int i = intervaloInicio; i <= intervaloFinal; i++){
        if(!(i%VALOR_MULTIPLO)) qtdMultiplos++;
    }
    printf("Quantidade de multiplos de %d no intervalo [%d, %d]: %d\n", VALOR_MULTIPLO, intervaloInicio, intervaloFinal, qtdMultiplos);


    return 0;
}