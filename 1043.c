#include <stdio.h>

int main(){

    float a, b, c, soma = 0, area;

    scanf("%f %f %f", &a, &b, &c);

    if( (a < b+c) && (b < a+c) && (c < b+a) ){
        soma = a+b+c;
        printf("Perimetro = %.1f\n", soma);
    }else{
        area = ((a+b)*c)/2;
        printf("Area = %.1f\n", area);
    }

    return 0;
}
