#include <stdio.h>
#define TAM 25

int main(){
    char string[TAM], c;
    // Entrada do usuário
    puts("Digite um texto:");
    fgets(string, TAM, stdin);
    puts("Digite um caractere:");
    scanf("%c", &c);
    
    // Verificação se contém a letra
    unsigned char cont=0;
    for(int i=0; i<TAM; i++){
        if(string[i]==c){
            cont++;
            break;
        }
    }
    printf("Texto: %s\n", string);
    (cont)?printf("O texto contém a letra %c\n", c): printf("O texto NÃO Contém a letra %c\n", c);

    return 0;
}