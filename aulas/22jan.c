#include <stdio.h>
#include <stdlib.h>

struct UF{
    char codigo[3];
    char descricao[50];
    unsigned populacao;
};

void flush_in();

int main(){
    struct UF uf1;
    fgets(uf1.codigo, 3, stdin);
    fgets(uf1.descricao, 50, stdin);
    flush_in();
    scanf("%u", &uf1.populacao);

    puts("--- ESTADO ----");
    printf("Código: %s\nDescrição: %s\nPopulação: %u\n\n", uf1.codigo, uf1.descricao, uf1.populacao);



    return 0;
}

void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}