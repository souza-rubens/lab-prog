// Desafio de Mapeamento

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int *alocar_memoria(unsigned);
int **alocar_memoria2(unsigned);
void popular_vetor(int *, unsigned, unsigned);
void imprimir_vetor(int *, unsigned);
int *achar_elemento(int, int *, unsigned);
void organizar_fila(int **, int *, unsigned);
void imprimir_vetor2(int **, unsigned);

int main(){
    int **p = NULL;
    unsigned n;
    srand(time(NULL));

    puts("Digite o número de elementos:");
    scanf("%u", &n);

    p = alocar_memoria2(n);

    int *num = alocar_memoria(n);
    popular_vetor(num, n, MAX);
    
    puts("Elementos:");
    imprimir_vetor(num, n);

    puts("Organize uma fila:");
    organizar_fila(p, num, n);

    puts("\nFila:");
    imprimir_vetor2(p, n);

    return 0;
}
int *alocar_memoria(unsigned tam){
    int *p = NULL;
    if(!(p = (int *) malloc(tam * sizeof(int)))){
        puts("Memória insuficiente.");
        exit(1);
    }

    return p;
}


int **alocar_memoria2(unsigned tam){
    int **p = NULL;
    if(!(p = (int **) malloc(tam * sizeof(int *)))){
        puts("Memória insuficiente.");
        exit(1);
    }

    return p;
}

void popular_vetor(int *p, unsigned tam, unsigned max){
    for(int i=0; i<tam; i++)
        *(p+i) = rand() % max;
}

void imprimir_vetor(int *p, unsigned tam){
    for(int i=0; i<tam; i++)
        printf("[%p] %d\n", p+i, *(p+i));
    printf("\n\n");
}

int *achar_elemento(int elemento, int *elementos, unsigned tam){
    int *p = NULL;
    for(int i=0; i<tam; i++){
        if(*(elementos+i) == elemento){
            p = elementos + i;
            break;
        }
    }
    if(!p){
        puts("Elemento não encontrado");
        exit(2);
    }

    return p;
}

void organizar_fila(int **fila, int *elementos, unsigned tam){
    for (int i=0; i<tam; i++){
        int elemento;
        printf("%d° Elemento: ", i+1);
        scanf("%d", &elemento);

        *(fila+i) = achar_elemento(elemento, elementos, tam);
    }

}

void imprimir_vetor2(int **p, unsigned tam){
    for(int i=0; i<tam; i++)
        printf("[%p] : [%p] %d\n", p+i, *(p+i), **(p+i));
    printf("\n\n");
}