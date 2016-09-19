#include <stdio.h>

int main(){

    double r, volume;

    scanf("%lf", &r);

    volume = (4 * 3.14159)/3 *(r*r*r);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
