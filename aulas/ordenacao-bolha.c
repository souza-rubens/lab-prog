#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define RANGE 100
int main(){
    int num[TAM];
    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        num[i] = rand() % RANGE;
        printf("%d ", num[i]);
    }
    puts("");

    //ORDENAÇÃO
    for(int i=0; i<TAM-1; i++){
        for(int j=0; j<TAM-1;j++){
            if(num[j] > num[j+1]){
                num[j] = num[j] ^ num[j+1];
                num[j+1] = num[j] ^ num[j+1];
                num[j] = num[j] ^ num[j+1];
                /*
                //IMPRIMIR VETOR
                for(int k = 0; k < TAM; k++)
                    printf("%d ", num[k]);
                puts("");
                */
            }
        }
    }
    puts("--- VETOR ORDENADO ---");
    for(int i = 0; i < TAM; i++)
        printf("%d ", num[i]);
    puts("");
    return 0;
}