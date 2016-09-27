#include <stdio.h>

int main(){

    int d;
    float c, consumo;

    scanf("%d", &d);
    scanf("%f", &c);

    consumo = d/c;

    printf("%.3f km/l\n", consumo);

    return 0;
}
