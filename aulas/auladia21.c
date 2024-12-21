// Desafio 1 da aula do dia 21

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int *alocar_memoria(unsigned int);
void preencher_vetor(int *, unsigned int, int);
void imprimir_vetor(int *, unsigned int);
unsigned cont_divisiveis(int *, int, unsigned int);
void *get_divisiveis(int *, int *, int, unsigned int);

int main(){
    unsigned tam;
    srand(time(NULL));

    // Entrada do usuário
    puts("Digite o tamanho do vetor:");
    scanf("%u", &tam);

    int *v = NULL;
    v = alocar_memoria(tam);
    preencher_vetor(v, tam, MAX);
    imprimir_vetor(v, tam);

    int y;
    puts("Digite um número:");
    scanf("%d", &y);

    unsigned contDiv = cont_divisiveis(v, y, tam);
    int *divisiveis = NULL;
    divisiveis = alocar_memoria(contDiv);
    get_divisiveis(v, divisiveis, y, tam);

    printf("Números divisíveis por %d:\n", y);
    imprimir_vetor(divisiveis, contDiv);


    return 0;
}

int *alocar_memoria(unsigned int n){
    int *p = NULL;
    p = (int *) malloc(n * sizeof(int));
    if(!p){
        puts("Memória insuficiente.");
        exit(1);
    }
    return p;
}

void preencher_vetor(int *vetor, unsigned n, int range){
    for(int i=0; i<n; i++)
        *(vetor + i) = rand() % MAX;
}

void imprimir_vetor(int *vetor, unsigned n){
    for(int i=0; i<n; i++)
        printf("%d  ", *(vetor + i));
    printf("\n\n");
}

unsigned cont_divisiveis(int *vetor, int divisor, unsigned n){
    unsigned cont = 0;
    for(int i = 0; i<n; i++)
        if(!(*(vetor + i) % divisor)) cont++;
    
    if(!cont){ 
        printf("Não há números divisíveis por %d.\n", divisor);
        exit(2);
    }

    return cont;
}

void *get_divisiveis(int *vetor, int *vetorDiv, int divisor, unsigned n){
    unsigned j = 0;
    for(int i=0; i<n; i++){
        if(!(*(vetor + i) % divisor)){
            *(vetorDiv + j) = *(vetor + i);
            j++;
        }
    }
}