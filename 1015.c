#include <stdio.h>
#include <math.h>

 typedef struct _PONTO{
     float X, Y;
 } PONTO;

int main() {

    PONTO P1, P2;
    float DISTANCIA;

    scanf("%f %f %f %f", &P1.X, &P1.Y, &P2.X, &P2.Y);

    DISTANCIA = sqrt(pow(P1.X - P2.X, 2) + pow(P1.Y - P2.Y, 2));

    printf("%.4f", DISTANCIA);
    printf("\n");

    return 0;
}
