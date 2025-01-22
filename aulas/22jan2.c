#include <stdio.h>
#include <stdlib.h>
struct ALUNO{
    float nota1;
    float nota2;
    float media;
};

void calcular_media(struct ALUNO *);

int main(int argc, char **argv){

    if(argc != 3){
        printf("Use:\n\t%s <nota1> <nota2>\n\n", *argv);
        exit(1);
    }

    struct ALUNO a1;
   
    a1.nota1 = atof(*(argv+1));
    a1.nota2 = atof(*(argv+2));

    calcular_media(&a1);

    puts("-----------");
    printf("Nota 1: %.1f\nNota 2: %.1f\n\nMédia: %.1f\n\n", a1.nota1, a1.nota2, a1.media);


    return 0;
}

void calcular_media(struct ALUNO *const p){
    p->media = ((p->nota1 + p->nota2) / 2);
}
