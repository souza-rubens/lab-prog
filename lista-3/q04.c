#include <stdio.h>
#include <string.h>
#define TAM 25

int main(){
    char texto1[TAM], texto2[TAM];
    puts("Digite o primeiro texto:");
    fgets(texto1, TAM, stdin);
    puts("Digite o segundo texto:");
    fgets(texto2, TAM, stdin);

    // Sem strcmp
    puts("--- sem strcmp ---");
    unsigned char verif=0;
    for(int i=0; i<TAM; i++){
        if(texto1[i]!=texto2[i]){
            verif=1;
            break;
        }
        if(texto1[i]=='\0' || texto2[i]=='\0') break;
    }
    
    (verif)?puts("Os textos NÃO são iguais."):puts("Os textos são iguais.");

    // Usando strcmp
    puts("--- usando strcmp ---");
    (strcmp(texto1, texto2))?puts("Os textos NÃO são iguais."):puts("Os textos são iguais.");
    return 0;
}