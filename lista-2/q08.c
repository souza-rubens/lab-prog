#include <stdio.h>

int main(){
    float valor = 302.75, entrada;
    entrada = valor - ((int)valor);
    entrada += ((int)valor) / 3 + ((int)valor) % 3;
    printf("%.2f\n", entrada);
    return 0;
}