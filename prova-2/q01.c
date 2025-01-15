#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(){
    unsigned tam;
    puts("Digite o tamanho do vetor:");
    scanf("%u", &tam);

    int *x = NULL;
    
    if( !(x = (int *) malloc(tam * sizeof(int)))){
        puts("Memória insuficiente");
        exit(2);
    }

    srand(time(NULL));
    for (int i=0; i<tam; i++)
        *(x+i) = rand() % MAX;

    int maior = *x, menor= *x;

    for(int i=1; i<tam; i++){
        maior = (*(x+i)> maior)?*(x+i): maior;
        menor = (*(x+i)< menor)?*(x+i): menor;
    }


    float *y = NULL;
    if( !(y = (float *) malloc(tam * sizeof(float)))){
        puts("Memória insuficiente");
        exit(2);
    }

    for(int i=0; i<tam; i++){
        *(y+i) = (*(x+i) - (float)menor) / (maior - menor);
    }

    // Imprimir vetor X
    for(int i=0; i<tam; i++)
        printf("%d\n", *(x+i));
    printf("\n");


    // Imprimir vetor Y
    for(int i=0; i<tam; i++)
        printf("%.2f\n", *(y+i));
    printf("\n");

    return 0;
}