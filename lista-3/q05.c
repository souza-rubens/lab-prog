#include <stdio.h>
#include <string.h>
#define TAM 30

int main(){
    char texto1[TAM], texto2[TAM], textoFinal[TAM*2], textoFinal2[TAM*2];
    
    // Entrada do usuário
    puts("Digite o primeiro texto:");
    fgets(texto1, TAM, stdin);
    puts("Digite o segundo texto:");
    fgets(texto2, TAM, stdin);

    // Remover Enter dos textos
    for(int i=0; i<TAM; i++){
        if(texto1[i] == '\n') texto1[i]='\0';
        if(texto2[i] == '\n') texto2[i]='\0';
    }
    // Concatenação
    puts("Texto concatenado sem strcat:");
    unsigned char fim;
    for(int i=0; i<TAM;i++){
        textoFinal[i] = texto1[i];
        if(textoFinal[i] == '\0'){
            fim = i;
            break;
        }
    }
    for(int i=0; i<TAM;i++)
        textoFinal[fim+i] = texto2[i];
    
    printf("%s\n", textoFinal);

    puts("Texto concatenado com strcat:");
    for(int i=0; i<TAM;i++){
        textoFinal2[i] = texto1[i];
        if(textoFinal2[i] == '\0') break;
    }
    strcat(textoFinal2, texto2);
    printf("%s\n", textoFinal2);
    return 0;
}
