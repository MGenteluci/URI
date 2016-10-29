#include <stdio.h>

int main(){

    int x, alc=0, gaso=0, dies=0;

    do{

        scanf("%d", &x);

        switch(x){
            case 1: alc++; break;
            case 2: gaso++; break;
            case 3: dies++; break;
        }

    }while( x != 4 );

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gaso);
    printf("Diesel: %d\n", dies);

    return 0;
}
