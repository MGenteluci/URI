#include <stdio.h>

int main() {

    double A, B, C, MEDIA;
    scanf("%lf %lf %lf", &A, &B, &C);

    MEDIA = (A*2 + B*3 + C*5)/10;

    printf("MEDIA = %.1lf", MEDIA);
    printf("\n");

    return 0;
}
