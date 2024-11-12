#include <stdio.h>

int main(){
    int intervaloInicio, intervaloFinal, somatorio = 0;
    puts("--- SOMATORIO DOS PARES ---");
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
        if(!(i%2)) somatorio += i;
    }
    printf("Somatorio dos numeros pares no intervalo [%d, %d]: %d\n", intervaloInicio, intervaloFinal, somatorio);

    return 0;
}