#include <stdio.h>
#include <stdlib.h>

#define QTD_OPERACOES 4

void somar(int, int, int*);
void multiplicar(int, int, int*);
void dividir(int, int, int*);
void subtrair(int, int, int*);

int main(int argc, char *argv[]){
    void (*pFunc[])(int, int, int*) = {somar, multiplicar, dividir, subtrair};
    char op[] = {'+', '*', '/', '-'};
    int a, b;

    if(argc != 2){
        printf("Use:\n\t%s <código operação>\n", *argv);
        exit(1);
    }
    int codOp = atoi(*(argv+1));

    if(codOp < 0 || codOp >= QTD_OPERACOES){
        puts("Operação não implementada");
        exit(2);
    }

    puts("Digite um número:");
    scanf("%d", &a);
    puts("Digite outro número:");
    scanf("%d", &b);

    int r;
    (*(pFunc + codOp))(a, b, &r);

    printf("%d %c %d = %d\n\n", a, op[codOp], b, r);

    return 0;
}

void somar(int a, int b, int *r){
    *r = a + b;
}
void multiplicar(int a, int b, int *r){
    *r = a * b;
}
void dividir(int a, int b, int *r){
    *r = a / b;
}
void subtrair(int a, int b, int *r){
    *r = a - b;
}
