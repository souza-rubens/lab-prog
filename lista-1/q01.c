#include <stdio.h>
int main(){
    int nDecimal;
    printf("Digite um numero decimal:\n");
    scanf("%d", &nDecimal);
    printf("Numero em octagonal: %#o\n", nDecimal);
    printf("Numero em hexadecimal: %#x\n", nDecimal);

    return 0;
}
