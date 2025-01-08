#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int *gerar_matriz(unsigned, unsigned);
void *popular_matriz(int *, unsigned , unsigned , int);
void imprimir_matriz(int *, unsigned , unsigned );
void multiplicar_matriz(unsigned, unsigned, int *, int *, int *);

int main(int argc, char *argv[0]){
    
    if(argc!=3){
        printf("Use:\n\t\t %s <linhas> <colunas>\n\n", *(argv));
        exit(1);
    }
    
    int nLinha = atoi(*(argv + 1));
    int nColuna = atoi(*(argv + 2));

    int *matrizA = gerar_matriz(nLinha, nColuna);
    int *matrizB = gerar_matriz(nLinha, nColuna);  
    
    if(!(matrizA && matrizB)){
        puts("Memória insuficiente");
        exit(1);
    }

    srand(time(NULL));
    popular_matriz(matrizA, nLinha, nColuna, MAX);
    popular_matriz(matrizB, nLinha, nColuna, MAX);

    puts("---MATRIZ A---");
    imprimir_matriz(matrizA, nLinha, nColuna);

    puts("---MATRIZ B---");
    imprimir_matriz(matrizB, nLinha, nColuna);

    // RESULTADO
    int *matrizResult = gerar_matriz(nLinha, nColuna);
    if(!(matrizResult)){
        puts("Memória insuficiente");
        exit(1);
    }

    multiplicar_matriz(nLinha, nColuna, matrizA, matrizB, matrizResult);
    
    puts("---MATRIZ RESULTADO---");
    imprimir_matriz(matrizResult, nLinha, nColuna);


    return 0;
}

int *gerar_matriz(unsigned qtdLinhas, unsigned qtdColunas){
    int *p = NULL;

    if (!(p = (int *) malloc(qtdLinhas * qtdColunas * sizeof(int))))
        return NULL;

    return p;
}

void *popular_matriz(int *matriz, unsigned qtdLinhas, unsigned qtdColunas, int mx){
    for(int i = 0; i<qtdLinhas*qtdColunas; i++)
        *(matriz + i) = rand() % mx;
}

void imprimir_matriz(int *matriz, unsigned qtdLinhas, unsigned qtdColunas){
    for(int i=0; i<qtdLinhas * qtdColunas; i++){
        printf("%4d", *(matriz + i));
        if(!((i + 1) % qtdColunas)) printf("\n");
    }
    printf("\n\n");
}

void multiplicar_matriz(unsigned qtdLinhas, unsigned qtdColunas, int *matrizA, int *matrizB, int *matrizResult){
    for(int i=0; i<qtdLinhas * qtdColunas; i++){
        *(matrizResult + i) = *(matrizA + i) * *(matrizB + i);
    }
}