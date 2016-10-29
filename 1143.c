#include <stdio.h>
#include <math.h>

int main(){

    int n;
    double i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        printf("%.0lf %.0lf %.0lf\n", i, pow(i,2), pow(i,3));

    }

    return 0;
}
