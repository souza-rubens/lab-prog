#include <stdio.h>

int main(){
    float altura, pesoIdeal;
    char sexo;
    printf("Digite a altura em metros:\n");
    scanf("%f", &altura);
    getchar();
    printf("Digite o sexo (m/f):\n");
    scanf("%c", &sexo);
    getchar();
    while(sexo != 'm' && sexo != 'f'){
        printf("Sexo inserido e invalido. Digite novamente:\n");
        scanf("%c", &sexo);
        getchar();
    }
    switch (sexo){
        case 'm':
            pesoIdeal = 72.7 * altura - 58;
        break;

        case 'f':
            pesoIdeal = 62.1 * altura - 44.7;
        break;

    }
    printf("Peso ideal: %.1f Kg", pesoIdeal);
    return 0;
}