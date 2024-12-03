#include <stdio.h>
#define DIM 3

int main(){
    int num[DIM][DIM];
    // Entrada do usuário
    puts("--- Preencha a matriz ---");
    for(int i=0; i< DIM; i++)
        for(int j=0; j<DIM; j++){
            printf("Elemento (%d, %d): ", i+1, j+1);
            scanf("%d", &num[i][j]);
        }
    
    //Print da matriz
    puts("--- MATRIZ ---");
    for(int i=0; i< DIM; i++){
        for(int j=0; j<DIM; j++)
            printf("%2d ", num[i][j]);
        printf("\n");
    }
    
    //Elementos da diagonal
    printf("Elementos da diagonal principal: ");
    for(int i=0; i<DIM; i++)
        printf("%d ", num[i][i]);
    printf("\n");

    return 0;
}