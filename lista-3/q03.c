#include <stdio.h>
#define TAM 20

int main(){
    char texto[TAM];
    puts("Digite um texto:");
    fgets(texto, TAM, stdin);
    unsigned char cont=0;
    for(int i=0; i<TAM; i++){
        // Remover Enter da String
        if(texto[i]=='\n') texto[i] = '\0';
        // Verificar o fim da String
        if(texto[i]=='\0') break;
        // Contagem
        cont++;
    }

    printf("%s\n", texto);
    printf("O texto possui %hhu caracteres.", cont);

    return 0;
}