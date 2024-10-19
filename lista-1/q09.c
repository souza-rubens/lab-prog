#include <stdio.h>

int main(){
    float volume, comprimento, altura, largura;
    char unidadeMedida[10];
    printf("---- CALCULO DE VOLUME ----\n");
    
    printf("Unidade de medida (m, cm, ...):\n");
    scanf("%s", unidadeMedida);
    
    printf("Comprimento: \n");
    scanf("%f", &comprimento);

    printf("Largura: \n");
    scanf("%f", &largura);

    printf("Altura: \n");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;
    printf("Volume: %.2f %s³\n", volume, unidadeMedida);
    return 0;
}