#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(){
    unsigned inicioIntervalo, fimIntervalo, vetSelect[TAM], vetBubble[TAM];
    srand(time(NULL));
    // Entrada do usuário
    puts("Intervalo de números positivos");
    puts("Digite o início do intervalo:");
    scanf("%u", &inicioIntervalo);
    puts("Digite o fim do intervalo:");
    scanf("%u", &fimIntervalo);

    // Preenchimento dos vetores de acordo com o intervalo
    for(int i=0; i<TAM; i++){
        vetSelect[i] = inicioIntervalo + (rand() % (fimIntervalo - inicioIntervalo));
        vetBubble[i] = vetSelect[i];
    }
    // Print do vetor
    puts("--- Vetor não ordenado ---");
    for(int i=0; i<TAM; i++)
        printf("%d ", vetSelect[i]);
    printf("\n\n");
    
    //Ordenação por seleção
    for(int i=0; i<TAM-1; i++){
        for(int j=i+1; j<TAM; j++){
            if(vetSelect[j]<vetSelect[i]){
                vetSelect[j] ^= vetSelect[i];
                vetSelect[i] ^= vetSelect[j];
                vetSelect[j] ^= vetSelect[i];
            }
        }
    }
    puts("--- Vetor ordenado por seleção ---");
    for(int i=0; i<TAM; i++)
        printf("%d ", vetSelect[i]);
    printf("\n\n");

    //Ordenação pelo método bolha
    puts("--- Vetor ordenado pelo método bolha ---");
    unsigned char verif, cont=0;
    for(int i=0; i<TAM-1; i++){
        verif = 0;
        for(int j=0;j<TAM-1;j++){
            if(vetBubble[j+1]<vetBubble[j]){
                verif = 1;
                vetBubble[j+1] ^= vetBubble[j];
                vetBubble[j] ^= vetBubble[j+1];
                vetBubble[j+1] ^= vetBubble[j];
            }
        }
        if(!verif) break;
        cont++;
    }
    printf("Contagem de rodadas: %u\n", cont);
    for(int i=0; i<TAM; i++)
        printf("%d ", vetBubble[i]);
    printf("\n\n");

    return 0;
}