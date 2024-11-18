#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM_VET 10
#define RANGE 100
int main(){
    int num[TAM_VET];
    srand(time(NULL));
    for(int i = 0; i < TAM_VET; i++){
        num[i] = rand() % RANGE;
        printf("%d ", num[i]);
    }
    puts("");
    //ORDENAÇÃO

    for(int i = 0; i < TAM_VET - 1; i++){
        for(int j = i + 1; j < TAM_VET; j++){
            if(num[j] < num[i]){
                num[j] = num[j] ^ num[i];
                num[i] = num[j] ^ num[i];
                num[j] = num[j] ^ num[i];
            }

        }

    }

    puts("--- VETOR ORDENADO ---");
    for(int i = 0; i < TAM_VET; i++)
        printf("%d ", num[i]);
    puts("");

    return 0;
}