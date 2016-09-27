#include <stdio.h>

int main(){

    int t, v;
    float litros, distancia;

    scanf("%d %d", &t, &v);

    distancia = t*v;
    litros = distancia/12;

    printf("%.3f\n", litros);

    return 0;
}
