#include <stdio.h>

int main(){

    double n = 0, i;

    for(i = 1; i <= 100; i++){

        n += (1/i);

    }

    printf("%.2lf\n", n);

    return 0;
}
