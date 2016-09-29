#include <stdio.h>

int main(){

    int x, i, j, cont = 0;

    scanf("%d", &x);

    float v[x], soma = 0, media;

    for(i = 0; i < x; i++){
        for(j = 0; j < 3; j++){

            scanf("%f", &v[j]);

            if(j == 0){
             soma += (v[j]*2);
            }else if(j == 1){
             soma += (v[j]*3);
            }if(j == 2){
             soma += (v[j]*5);
            }

           cont++;

           if(cont == 3){
            media = soma/10;
            printf("%.1f\n", media);
            cont = 0;
            soma = 0;
            }

        }


    }

    return 0;
}
