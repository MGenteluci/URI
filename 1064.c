#include <stdio.h>

int main(){

    float v[6], media,  soma = 0;
    int i, valor = 0;

    for(i = 0; i < 6; i++){

        scanf("%f", &v[i]);

        if(v[i] > 0){
            valor++;
            soma += v[i];
        }

    }

    media = soma/valor;

    printf("%d valores positivos\n", valor);
    printf("%.1f\n", media);

    return 0;
}
