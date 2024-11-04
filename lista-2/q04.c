#include <stdio.h>

int main(){
    unsigned char anos = 0, hJose, hPedro;
    do {
        anos++;
        hJose = 150 + 2*anos;
        hPedro = 110 + 3*anos;
    }
    while(hPedro <= hJose);
    printf("Pedro = %hhu cm - José = %hhu cm\n", hPedro, hJose);
    printf("Pedro será maior que José em %hhu anos.\n", anos);

    return 0;
}