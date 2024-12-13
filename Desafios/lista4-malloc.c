#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 256
#define BITS 8

void preencher_matriz(unsigned char *matriz, int LIN, int COL);
void imprimir_matriz(unsigned char *matriz, int LIN, int COL);
void gerar_lbp(unsigned char *matrizOriginal, unsigned char *matrizLBP, int LIN, int COL);

int main(){

    //Entrada do Usuário
    unsigned nLinha, nColuna;
    puts("Digite a quantidade de linhas:");
    scanf("%u", &nLinha);

    puts("Digite a quantidade de colunas:");
    scanf("%u", &nColuna);

    //Geração e impressão das matrizes dinâmicas
    unsigned char *imagemEntrada = NULL;
    imagemEntrada = malloc(nLinha * nColuna * sizeof(char));
    srand(time(NULL));
    
    preencher_matriz(imagemEntrada, nLinha, nColuna);

    puts("--- IMAGEM ORIGINAL ---");
    imprimir_matriz(imagemEntrada, nLinha, nColuna);

    unsigned char *imagemLBP = NULL;
    imagemLBP = malloc(nLinha * nColuna * sizeof(char));
    srand(time(NULL));

    gerar_lbp(imagemEntrada, imagemLBP, nLinha, nColuna);

    puts("--- IMAGEM LBP ---");
    imprimir_matriz(imagemLBP, nLinha, nColuna);

    free(imagemEntrada);
    free(imagemLBP);
    return 0;
}

void preencher_matriz(unsigned char *matriz, int LIN, int COL){
    for(int i=0; i<LIN*COL; i++)
            *(matriz + i) = rand() % MAX;
}

void imprimir_matriz(unsigned char *matriz, int LIN, int COL){
    for(int i=0; i<LIN*COL; i++){
        printf("%3hhu  ", *(matriz + i));
        if(!((i+1)%COL)) printf("\n");
    }
    printf("\n");
}

void gerar_lbp(unsigned char *matrizOriginal, unsigned char *matrizLBP, int LIN, int COL){
    
    //Matriz com o número de deslocamentos necessários para a máscara
    unsigned char matrizTemp[BITS] = {0, 1, 2, 7, 3, 6, 5, 4};
    
    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            unsigned char mask = 0x0;
            unsigned char cont = 0;
            
            //Laços para pegar os números na vizinhança
            for(int k=i-1; k<=i+1;k++){
                for(int l=j-1; l<=j+1; l++){
                    
                    //Ignorar se o número vizinho estiver fora da matriz
                    if((k<0 || k==LIN) || (l<0 || l==COL)){
                        cont++;
                        continue;
                    } 
                    //Verificação para ignorar o número central
                    if(k == i && l==j) continue;

                    //Operação para gerar o número LBP
                    if(*(matrizOriginal + (COL*k) + l ) >= *(matrizOriginal + (COL*i) + j )){
                        
                        mask = mask + (1 << matrizTemp[cont]);
                    }
                    cont++;
                }
            }
            
            *(matrizLBP + (COL*i) + j) = mask;
        }
    }

}
