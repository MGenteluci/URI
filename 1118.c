#include <stdio.h>

int main(){

    double n1, n2;
    int x, i;

    scanf("%lf", &n1);

    while( (n1 < 0) || (n1 > 10) ){
        printf("nota invalida\n");
        scanf("%lf", &n1);
    }

    scanf("%lf", &n2);

    while( (n2 < 0) || (n2 > 10)  ){
        printf("nota invalida\n");
        scanf("%lf", &n2);
    }

    printf("media = %.2lf\n", (n1+n2)/2);

    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &x);

    for(i = 0; i < 1; i++){
    while( (x != 1) && (x != 2) ){

    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &x);

    }

    while(x == 1){

    scanf("%lf", &n1);

    while( (n1 < 0) || (n1 > 10) ){
        printf("nota invalida\n");
        scanf("%lf", &n1);
    }

    scanf("%lf", &n2);

    while( (n2 < 0) || (n2 > 10)  ){
        printf("nota invalida\n");
        scanf("%lf", &n2);
    }

    printf("media = %.2lf\n", (n1+n2)/2);

    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &x);

    }


    if(x == 2){
        i++;
    }

    i--;

    }
    return 0;
}
