#include <stdio.h>

int calcular_quadrado(int num){
    int resultado = num * num;
    return resultado;
}
int main(){
    int num, quadrado;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    quadrado = calcular_quadrado(num);
    printf("O quadrado de %d: %d\n", num, quadrado);

    return 0;
}
