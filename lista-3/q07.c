#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3
#define MAX 20

int main(){
    unsigned num[TAM];
    float mediaArit = 0, mediaGeom = 1;
    srand(time(NULL));
    
    for(int i=0;i<TAM;i++)
        num[i] = rand() % MAX;

    for(int i=0;i<TAM;i++){
        mediaArit += num[i];
        if(num[i] != 0) mediaGeom *= num[i];
    }
    mediaArit/= TAM;
    mediaGeom = pow(mediaGeom, 1.0/TAM);

    puts("Números:");
    for(int i=0;i<TAM;i++)
        printf("%d\t", num[i]);
    printf("\n");

    printf("Média aritmética: %.2f\n", mediaArit);
    printf("Média geométrica: %.2f\n", mediaGeom);
    return 0;
}