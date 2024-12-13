#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 256

void preencher_matriz(unsigned char *matriz, int LIN, int COL);
void imprimir_matriz(unsigned char *matriz, int LIN, int COL);

int main(){
    unsigned nLinha, nColuna;
    puts("Digite a quantidade de linhas:");
    scanf("%u", &nLinha);

    puts("Digite a quantidade de colunas:");
    scanf("%u", &nColuna);

    unsigned char *imagemEntrada = NULL;
    imagemEntrada = malloc(nLinha * nColuna * sizeof(char));
    srand(time(NULL));
    
    preencher_matriz(imagemEntrada, nLinha, nColuna);
    imprimir_matriz(imagemEntrada, nLinha, nColuna);

    /*
    unsigned char imagemLBP[nLinha][nColuna], numLBP;
    int N=nLinha, M=nColuna;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            numLBP = 0;
            if(j-1 >= 0)
                if(imagemEntrada[i][j-1] >= imagemEntrada[i][j])
                    numLBP++;
            numLBP = numLBP << 1;
            
            if(i+1 < N && j-1 >= 0)
                if(imagemEntrada[i+1][j-1] >= imagemEntrada[i][j])
                    numLBP++;
            numLBP = numLBP << 1;
            
            if(i+1 < N)
                if(imagemEntrada[i+1][j] >= imagemEntrada[i][j])
                    numLBP++;
            numLBP = numLBP << 1;
            
            if(i+1 < N && j+1 < M)
                if(imagemEntrada[i+1][j+1] >= imagemEntrada[i][j])
                    numLBP++;
            numLBP = numLBP << 1;
            
            if(j+1 < M)
                if(imagemEntrada[i][j+1] >= imagemEntrada[i][j])
                    numLBP++;
            numLBP = numLBP << 1;

            if(i-1 >= 0 && j+1 < M)
                if(imagemEntrada[i-1][j+1] >= imagemEntrada[i][j])
                    numLBP++;
            numLBP = numLBP << 1;

            if(i-1 >= 0)
                if(imagemEntrada[i-1][j] >= imagemEntrada[i][j])
                    numLBP++;
            numLBP = numLBP << 1;
            if(i-1 >= 0 && j-1 >= 0)
                if(imagemEntrada[i-1][j-1] >= imagemEntrada[i][j])
                    numLBP++;
            
            imagemLBP[i][j] = numLBP;
        }
    }
       
    puts("---IMAGEM ORIGINAL---");
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%3hhu  ", imagemEntrada[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    puts("---IMAGEM LBP---");
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%3hhu  ", imagemLBP[i][j]);
        }
        printf("\n");
    }
    */
    return 0;
}

void preencher_matriz(unsigned char *matriz, int LIN, int COL){
    for(int i=0; i<LIN; i++)
        for(int j=0; j<COL; j++)
            *(matriz + ((i*COL) +j)) = rand() % MAX;
}

void imprimir_matriz(unsigned char *matriz, int LIN, int COL){
    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            printf("%3hhu  ", *(matriz + (i*COL) + j));
        }
        printf("\n");
    }
}