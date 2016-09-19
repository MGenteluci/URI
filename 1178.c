#include <stdio.h>

int main(){

    int  i;
    double v, n[100];

    scanf("%lf", &v);

    for(i = 0; i < 100; i++){

    if ( i == 0){
    n[i] = v;
    }else{
    n[i] = n[i-1]/2;
    }

    printf("N[%d] = %.4lf\n", i, n[i]);

    }

    return 0;
}
