#include <stdio.h>

int main(){
    int num, antecessor, sucessor;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    antecessor = num - 1;
    sucessor = num + 1;
    printf("Numero: %d\nAntecessor: %d\nSucessor: %d\n", num, antecessor, sucessor);

    return 0;
}