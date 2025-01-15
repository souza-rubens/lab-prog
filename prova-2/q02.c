#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
void par_impar(int *, unsigned, int **);
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

    // Imprimir vetor X
    for(int i=0; i<tam; i++)
        printf("[%p] - %d\n", x+i, *(x+i));
    printf("\n");

    int *p[2];
    par_impar(x, tam, p);

    printf("Par: [%p] - %d\n", *p, **p);
    printf("Ímpar: [%p] - %d\n\n", *(p+1), **(p+1));


    return 0;
}

void par_impar(int *x, unsigned tam, int **p){
    *p = NULL;
    
    // Par
    for(int i=0; i<tam; i++){
        if(!(*(x+i)%2)){
            *p = x+i;
            break;
        }
    }

    // Ímpar
    for(int i=0; i<tam; i++){
        if(*(x+i)%2){
            *(p+1) = x+i;
            break;
        }
    }
}