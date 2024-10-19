#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    printf("Numero: %d\n", num);
    printf("Triplo: %d\n", num*3);
    printf("Quadrado: %d\n", num*num);
    printf("Meio: %d\n", num/2);
    
    return 0;
}