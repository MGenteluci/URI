#include <stdio.h>

int main(){

    float n1, n2;

    scanf("%f", &n1);

    while( (n1 < 0) || (n1 > 10) ){
        printf("nota invalida\n");
        scanf("%f", &n1);
    }

    scanf("%f", &n2);

    while( (n2 < 0) || (n2 > 10) ){
        printf("nota invalida\n");
        scanf("%f", &n2);
    }

    printf("media = %.2f\n", (n1+n2)/2);

    return 0;
}
