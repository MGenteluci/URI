#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, aux;

    scanf("%f %f %f", &a, &b, &c);

    if( (a > b) && (a > b) ){
        a = a;
    }else if( (b > a) && (b > c) ){
        aux = a;
        a = b;
        b = aux;
    }else if( (c > a) && (c > b) ){
        aux = a;
        a = c;
        c = aux;
    }

    if(a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
    }else if( pow(a,2) == pow(b,2) + pow(c,2)  ){
        printf("TRIANGULO RETANGULO\n");

        if( (a == b) && (b == c) ){
            printf("TRIANGULO EQUILATERO\n");
        }else if( (a == b) || (b == c) || (a == c)){
            printf("TRIANGULO ISOSCELES\n");
        }

    }else if( pow(a,2) > pow(b,2) + pow(c,2)  ){
        printf("TRIANGULO OBTUSANGULO\n");

        if( (a == b) && (b == c) ){
            printf("TRIANGULO EQUILATERO\n");
        }else if( (a == b) || (b == c) || (a == c)){
            printf("TRIANGULO ISOSCELES\n");
        }

    }else if( pow(a,2) < pow(b,2) + pow(c,2)  ){
         printf("TRIANGULO ACUTANGULO\n");

        if( (a == b) && (b == c) ){
            printf("TRIANGULO EQUILATERO\n");
        }else if( (a == b) || (b == c) || (a == c)){
            printf("TRIANGULO ISOSCELES\n");
        }

    }

    return 0;
}
