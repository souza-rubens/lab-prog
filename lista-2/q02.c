#include <stdio.h>

int main(){
    unsigned char numDia;
    puts("---- DIA DA SEMANA ----");
    do{
        puts("Digite um número de 1 a 7 para o dia ou 0 para encerrar o programa:");
        scanf("%hhu", &numDia);
        printf("Dia da semana %hhu: ", numDia);
        switch(numDia){
            case 1:
                puts("Domingo");
                break;
            case 2:
                puts("Segunda");
                break;
            case 3:
                puts("Terça");
                break;
            case 4:
                puts("Quarta");
                break;
            case 5:
                puts("Quinta");
                break;
            case 6:
                puts("Sexta");
                break;
            case 7:
                puts("Sábado");
                break;
            default:
                puts("Número de dia não válido");
        }
        puts("-----------------------");

    }
    while(numDia);
    puts("Programa encerrado pelo usuário");
    
    return 0;
}