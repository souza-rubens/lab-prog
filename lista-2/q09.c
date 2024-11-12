#include <stdio.h>
#define MAXTERMO 20

int main(){
    unsigned numA = 0, numB = 0, soma = 1;
    puts("--- SERIE DE FIBONACCI ---");
    printf("%d Termos: ", MAXTERMO);
    
    for(int i = 0; i < MAXTERMO; i++){
        printf("%d  ", soma);
        numA = numB;
        numB = soma;
        soma = numA + numB;
    }
    puts("");
    return 0;
}