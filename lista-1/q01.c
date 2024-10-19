#include <stdio.h>
int main(){
    int nDecimal;
    printf("Digite um numero decimal:\n");
    scanf("%d", &nDecimal);
    printf("Numero em octagonal: %o", nDecimal);
    printf("\nNumero em hexadecimal: %x", nDecimal);

    return 0;
}