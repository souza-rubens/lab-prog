#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
#define RANGE 5
#define INICIAL -2

int *alocar_memoria(unsigned);
void popular_vetor(int *, unsigned, unsigned);
void popular_vetorY(int *, int *, unsigned, unsigned, int);
void imprimir_vetor(int *, unsigned);

int main(){
    unsigned tam;
    srand(time(NULL));

    puts("Digite a quantidade de elementos:");
    scanf("%u", &tam);
    int *x = alocar_memoria(tam);
    
    popular_vetor(x, tam, MAX);
    int *y = alocar_memoria(tam);
    popular_vetorY(x, y, tam, RANGE, INICIAL);


    return 0;
}

void imprimir_vetor(int *p, unsigned tam){
    for(int i=0; i<tam; i++)
        printf("[%p] %d\n", p+i, *(p+i));
    printf("\n\n");
}

int *alocar_memoria(unsigned tam){
    int *p = NULL;
    if(!(p = (int *) malloc(tam * sizeof(int)))){
        puts("Memória insuficiente.");
        exit(1);
    }

    return p;
}

void popular_vetor(int *p, unsigned tam, unsigned max){
    for(int i=0; i<tam; i++)
        *(p+i) = rand() % max;
}

void popular_vetorY(int *x,  int *y, unsigned tam, unsigned range, int inicial){
    for(int i=0; i<tam; i++)
        *(y+i) =  ((rand() % range) + inicial) + *(x+i);
}

