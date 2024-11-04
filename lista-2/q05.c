#include <stdio.h>

int main(){
    int num, maior, menor;
    puts("---- MAIOR E MENOR NÚMERO ----");
    puts("Digite um número inteiro ou digite 0 para encerrar:");
    scanf("%d", &num);
    maior = num;
    menor = num;
    while(num){
        if(num > maior) maior = num;
        if(num < menor) menor = num;
        puts("Digite um número inteiro:");
        scanf("%d", &num);
    }
    printf("Maior número inserido: %d\n", maior);
    printf("Menor número inserido: %d\n", menor);
    return 0;
}