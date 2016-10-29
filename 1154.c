#include <stdio.h>

int main(){

    int n, c = 0;
    float soma = 0, media;

    do{
        scanf("%d", &n);

        if(n > 0){
            c++;
            soma += n;
        }


    }while(n > 0);

    media = soma/c;

    printf("%.2f\n", media);

    return 0;
}
