#include <stdio.h>

void trocar_valores(int *, int *);

int main(){
    int a, b;
    
    puts("Digite o primeiro valor:");
    scanf("%d", &a);

    puts("Digite o segundo valor:");
    scanf("%d", &b);

    printf("Valor A: %d\tValor B: %d\n\n", a, b);

    trocar_valores(&a, &b);
    puts("Valores trocados");
    printf("Valor A: %d\tValor B: %d\n\n", a, b);

    return 0;
}

void trocar_valores(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}