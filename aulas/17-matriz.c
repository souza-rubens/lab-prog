#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

void maior_diag(int *, int **, int, int);

int main(){
    unsigned qLin, qCol;
    srand(time(NULL));

    // Entrada do Usuário
    puts("Digite a quantidade de linhas:");
    scanf("%u", &qLin);
    puts("Digite a quantidade de colunas:");
    scanf("%u", &qCol);

    // Criação da matriz dinamicamente
    int **m = (int **) malloc(qLin * sizeof(int *));
    for(int i=0; i<qLin; i++)
        *(m+i) = (int *) malloc(qCol * sizeof(int));

    // Preenchimento matriz com valores aleatórios
    for(int i=0; i<qLin; i++){
        for(int j=0; j<qCol; j++){
            *(*(m+i)+j) = rand() % MAX;
        }
    }

    // Imprimir Matriz
    puts("--- MATRIZ ---");
    for(int i=0; i<qLin; i++){
        for(int j=0; j<qCol; j++){
            printf("%3d ", *(*(m+i)+j));
        }
        printf("\n");
    }
    
    // Pegar o maior valor da matriz
    int maiorValor = **m;
    for(int i=0; i<qLin; i++){
        for(int j=0; j<qCol; j++){
            maiorValor =(*(*(m+i)+j) > maiorValor)? *(*(m+i)+j): maiorValor;
        }
    }

    printf("\n");
    printf("Maior valor: %d\n\n", maiorValor);

    int maiorValorDiag;
    maior_diag(&maiorValorDiag, m, qLin, qCol);

    printf("Maior valor da diagonal principal: %d\n\n", maiorValorDiag);

    free(m);
    return 0;
}

void maior_diag(int *p, int **matriz, int lin, int col){
    *p = **matriz;
    for(int i=0; i<lin; i++)
        *p = (*(*(matriz+i)+i) > *p)? *(*(matriz+i)+i): *p;
}
