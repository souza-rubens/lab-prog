#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(){
    float vetor[15];
    srand(time(NULL));
    // Gerar vetor
    for(int i=0; i<15;i++)
        vetor[i] = ((float)rand())/ RAND_MAX * MAX;

    // Printar vetor
    puts("--- VETOR ---");
    for(int i=0; i<15; i++)
        printf("Elemento %d: %f\n", i, vetor[i]);
    puts("");

    // Procurar menor e maior valor
    float menorNum, maiorNum;
    menorNum = maiorNum = vetor[0];
    
    for(int i=1;i<15;i++){
        menorNum = (vetor[i]<menorNum)?vetor[i]:menorNum;
        maiorNum = (vetor[i]>maiorNum)?vetor[i]:maiorNum;
    }
    
    printf("Menor número: %f\n", menorNum);
    printf("Maior número: %f\n", maiorNum);
    printf("%f + %f = %f\n", menorNum, maiorNum, menorNum+maiorNum);

    return 0;
}