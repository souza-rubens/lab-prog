#include <stdio.h>
#include <stdlib.h>
#define VALOR 128

void mostrar_armarios(unsigned char cod){
    unsigned char armarios = cod;
    printf("Armarios atuais:\n");
    for(int i = 0; i < 8; i++){
        if(armarios >= (VALOR >> i)){
            printf("1 - ");
            armarios -= (VALOR >> i);
        }
        else{
            printf("0 - ");
        }
    }
    printf("\n");
}
int main(){
    unsigned char cod = 0, mask = 0x01, pos, opcao;
    do{
        puts("---- ARMARIOS ----");
        printf("cod: %hhu\n", cod);
        mostrar_armarios(cod);

        printf("MENU:\n 1 - Ocupar Armario\n2 - Liberar armario\n3 - Sair\n");
        puts("Digite sua escolha: ");
        scanf("%hhu", &opcao);
        switch(opcao){
            case 1:
                if(cod == 255) {
                    puts("Todos os armarios estao ocupados");
                    break;
                }
                puts("TESTE OPCAO 1");
                unsigned char codTemp;
                do{
                    pos = (rand()%8) + 1;
                    codTemp = cod | (mask << pos-1);
                } while(codTemp == cod);
                printf("Posicao livre escolhida: %hhu\n", pos);
                cod = codTemp;
                break;
            case 2:
                puts("TESTE OPCAO 2");
                printf("Digite a posicao da cadeira:\n");
                scanf("%hhu", &pos);
                cod = cod & ~(mask << pos-1);
                break;
            case 3:
                puts("Programa encerrado pelo usuario");
                break;
            default:
                puts("Opcao inserida invalida");
        }

    } while(opcao != 3);
    
    return 0;
}
