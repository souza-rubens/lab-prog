#include <stdio.h>

int main(){
    float numA, numB;
    printf("Digite o primeiro numero:\n");
    scanf("%f", &numA);
    printf("Digite o segundo numero:\n");
    scanf("%f", &numB);

    printf("%.2f + %.2f = %.2f\n", numA, numB, numA+numB);
    printf("%.2f * %.2f = %.2f\n", numA, numB, numA*numB);
    printf("%.2f - %.2f = %.2f\n", numA, numB, numA-numB);
    if(numB != 0){
        printf("%.2f / %.2f = %.2f\n", numA, numB, numA/numB);
    }
    else{
        printf("%.2f / %.2f = Operacao Invalida\n", numA, numB);
    }
    printf("%d %% %d = %d\n", ((int)numA), ((int)numB), ((int)numA)%((int)numB));

    return 0;
}