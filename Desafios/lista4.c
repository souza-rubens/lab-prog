#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define M 20
#define MAX 256
int main(){
    unsigned char imagemEntrada[N][M];
    srand(time(NULL));
    
    //Preencher matriz
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++)
            imagemEntrada[i][j] = rand() % MAX;
    }
    unsigned char imagemLBP[N][M], numLBP;
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
    return 0;
}
