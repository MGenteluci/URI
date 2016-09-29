#include <stdio.h>

int main(){

    int x, y;

    do{scanf("%d %d", &x, &y);

        if( (x == 0) || (y == 0) ){

        }else if( (x > 0) && (y > 0) ){
            printf("primeiro\n");
        }else if( (x > 0) && (y < 0) ){
            printf("quarto\n");
        }else if( (x < 0) && (y > 0) ){
            printf("segundo\n");
        }else if( (x < 0) && (y < 0) ){
            printf("terceiro\n");
        }

    }while( (x != 0) && (y != 0) );

    return 0;
}

