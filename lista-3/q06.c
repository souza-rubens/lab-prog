#include <stdio.h>
#define TAM 50

int main(){
    char texto[TAM];
    
    // Entrada do usuário
    puts("Digite um texto:");
    fgets(texto, TAM, stdin);
    
    // Remover Enter da string e identificar a posição do último caractere
    unsigned char fim = 0;
    for(int i=0; i<TAM; i++){
        if(texto[i]=='\n'){
            texto[i] = '\0';
            if(i>0) fim = i-1;
            break;
        }
    }
    // Print na forma inversa
    puts("Texto invertido:");
    for(int i=fim; i>=0;i--)
        printf("%c", texto[i]);
    printf("\n");


    return 0;
}