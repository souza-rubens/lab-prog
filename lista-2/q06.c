#include <stdio.h>

int main(){
    unsigned contPaulo = 0, contRenata = 0, contBranco = 0, contNulo = 0, totalVotos = 0;
    char voto, confirm;

    while(1){
        puts("----- VOTAÇÃO -----");
        puts("Candidatos: 5-PAULO, 7-RENATA, 0-BRANCO");
        puts("Sua escolha:");
        scanf("%hhu", &voto);
        getchar();
        if(voto < 0) break;
        switch(voto){
            case 0:
                puts("Confirmar voto BRANCO (s/n)");
                scanf("%c", &confirm);
                getchar();
                if(confirm == 's') contBranco++;
                break;
            case 5:
                puts("Confirmar voto em PAULO (s/n)");
                scanf("%c", &confirm);
                getchar();
                if(confirm == 's') contPaulo++;
                break;
            case 7:
                puts("Confirmar voto em RENATA (s/n)");
                scanf("%c", &confirm);
                getchar();
                if(confirm == 's') contRenata++;
                break;
            default:
                puts("Confirmar voto NULO (s/n)");
                scanf("%c", &confirm);
                getchar();
                if(confirm == 's') contNulo++;
        }
    
    }
    totalVotos = contBranco + contNulo + contPaulo + contRenata;
    
    puts("----- CONTAGEM DE VOTOS-----");
    printf("TOTAL DE VOTOS: %u\n", totalVotos);
    printf("PAULO: %.1f%% (%u)\n", ((float)contPaulo) / totalVotos * 100, contPaulo);
    printf("RENATA: %.1f%% (%u)\n", ((float)contRenata) / totalVotos * 100, contRenata);
    printf("BRANCOS: %.1f%% (%u)\n", ((float)contBranco) / totalVotos * 100, contBranco);
    printf("NULOS: %.1f%% (%u)\n", ((float)contNulo) / totalVotos * 100, contNulo);
    puts("----------------");
    if(contPaulo > contRenata) puts("CANDIDATO ELEITO: PAULO");
    if(contRenata > contPaulo) puts("CANDIDATO ELEITO: RENATA");
    if(contPaulo == contRenata) puts("NENHUM CANDIDATO ELEITO - EMPATE");
    return 0;
}