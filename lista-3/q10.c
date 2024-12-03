#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_LINHA 10
#define N_COLUNA 10
#define MAX 100

int main(){
    unsigned num[N_LINHA][N_COLUNA];
    srand(time(NULL));

    // Preenchimento da Matriz
    for(int i=0; i<N_LINHA; i++)
        for(int j=0; j<N_COLUNA; j++)
            num[i][j] = rand() % MAX;
    
    // Print da Matriz
    for(int i=0; i<N_LINHA; i++){
        for(int j=0; j<N_COLUNA; j++)
            printf("%2u ", num[i][j]);
        printf("\n");
    }

    //Entrada do usuário
    unsigned numEntrada;
    printf("Digite o número a ser procurado: ");
    scanf("%u", &numEntrada);

    // Contagem de aparições
    unsigned cont = 0;
    for(int i=0; i<N_LINHA; i++)
        for(int j=0; j<N_COLUNA; j++)
            if(num[i][j] == numEntrada) cont++;
    
    printf("O número %u aparece %u vezes\n", numEntrada, cont);

    return 0;
}