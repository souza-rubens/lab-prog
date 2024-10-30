#include <stdio.h>

int main(){
    float cotacaoDolarAtual, valorReal, valorDolar;
    printf("Cotacao atual do dolar:\n");
    scanf("%f", &cotacaoDolarAtual);
    printf("Digite o valor (R$):\n");
    scanf("%f", &valorReal);
    
    valorDolar = valorReal / cotacaoDolarAtual;
    printf("Valor: R$ %.2f\nEm dolar: U$ %.2f\n", valorReal, valorDolar);
    
    return 0;
}