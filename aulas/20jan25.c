#include <stdio.h>
#include <stdlib.h>

void imprimir_numero(int);

int main(int argc, char *argv[0]){
    void (*pFunc)(int);
    
    if(argc != 2){
        printf("Use:\n\t%s <número inteiro>\n\n", *argv);
        exit(2);
    }

    int n = atoi(*(argv+1));

    // puts("Digite um número:");
    // scanf("%d", &n);

    pFunc = imprimir_numero;
    (*pFunc)(n);

    return 0;
}

void imprimir_numero(int n){
    printf("O número inserido é %d\n\n", n);
}