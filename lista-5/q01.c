#include <stdio.h>

void *somar(int *, int *, int *);
int main(){
    
    int a, b, r;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    somar(&a, &b, &r);
    
    printf("[%p] %d + [%p] %d = [%p] %d\n\n", &a, a, &b, b, &r, r);
    
    return 0;
}

void *somar(int *a, int *b, int *r){
    *r = *a + *b;
}