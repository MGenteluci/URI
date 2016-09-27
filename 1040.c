#include <stdio.h>

int main(){

    float n1, n2, n3, n4, n5;
    float media, mediaFinal;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = ( (n1*2) + (n2*3) + (n3*4) + (n4*1) )/10;

    if(media >= 7){
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }else if(media < 5){
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }else if( (media >= 5) ){

        scanf("%f", &n5);

        mediaFinal = (media+n5)/2;

        if(mediaFinal >= 5){
            printf("Media: %.1f\n", media);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1f\n", n5);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", mediaFinal);
        }else if(mediaFinal < 5){
            printf("Media: %.1f\n", media);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1f\n", n5);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", mediaFinal);
        }

    }

    return 0;
}
