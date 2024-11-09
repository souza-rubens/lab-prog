#include <stdio.h>

int main(){
    float numA, numB, result;
    puts("--- DIVISAO ----");
    puts("Digite o primeiro numero");
    scanf("%f", &numA);
    do{
        puts("Digite o segundo numero");
        scanf("%f", &numB);
        if(!numB) puts("Divisao por ZERO invalida.");
    }while(!numB);
    result = numA / numB;
    printf("%.2f / %.2f = %.2f\n", numA, numB, result);

    return 0;
}