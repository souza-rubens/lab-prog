#include <stdio.h>
int main(){
    float num;
    printf("Digite um numero:\n");
    scanf("%f", &num);
    printf("Numero com 2 casas decimais: %.2f", num);

    return 0;
}