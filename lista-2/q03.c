#include <stdio.h>

int calcular_fatorial(int num){
    if(!num) return 1;
    else return num * calcular_fatorial(num - 1);
}

int main(){
    unsigned f, resultado;
    puts("---- CALCULAR FATORIAL ----");
    puts("Digite um número inteiro positivo: ");
    scanf("%u", &f);
    resultado = calcular_fatorial(f);
    printf("%u! = %u\n", f, resultado);

    return 0;
}