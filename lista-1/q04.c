#include <stdio.h>

int main(){
    float conta;
    printf("Digite o valor da conta:\n");
    scanf("%f", &conta);
    printf("10%%: R$ %.2f\n", conta * 0.1);
    printf("Valor total: R$ %.2f", conta * 1.1);
    return 0;
}