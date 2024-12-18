#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

void preencher_matriz(unsigned char *, int, int, int);
void imprimir_matriz(unsigned char *, int, int);

int main(){
    unsigned char *p = NULL;
    unsigned lin, col;

    srand(time(NULL));

    puts("Digite a quantidade de linhas:");
    scanf("%u", &lin);

    puts("Digite a quantidade de colunas:");
    scanf("%u", &col);

    p = malloc(lin * col * sizeof(unsigned char));
    if(p == NULL){ 
        printf("Espaço insuficiente!\n");
        return 1;
    }

    preencher_matriz(p, lin, col, MAX);
    imprimir_matriz(p, lin, col);

    // -----

    unsigned i, j;

    puts("Mostrar elemnt em uma posição (i,j)");
    
    puts("Digite i:");
    scanf("%u", &i);
    puts("Digite j:");
    scanf("%u", &j);

    printf("Número: %hhu\n", *(p + i * col + j));

    free(p);
    return 0;
}

void preencher_matriz(unsigned char *matriz, int LIN, int COL, int max){
    for(int i=0; i<LIN*COL; i++)
        *(matriz + i) = rand() % max;
}

void imprimir_matriz(unsigned char *matriz, int LIN, int COL){
    for(int i=0; i<LIN*COL; i++){
        printf("%3hhu  ", *(matriz + i));
        if(!((i+1)%COL)) printf("\n");
    }
    printf("\n\n");
}