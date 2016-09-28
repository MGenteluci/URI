#include <stdio.h>

int main(){

    float s, sF;

    scanf("%f", &s);

    if(s <= 2000){
        printf("Isento\n");
    }
    else if( s <= 3000 ){
        sF = (s - 2000) * 0.08;
        printf("R$ %.2f\n", sF);
    }
    else if( s <= 4500 ){
        sF = (s - 3000) * 0.18 + (1000*0.08);
        printf("R$ %.2f\n", sF);
    }
    else if( s > 4500 ){
        sF = (s - 4500) * 0.28 + (1500*0.18) + (1000*0.08) ;
        printf("R$ %.2f\n", sF);
    }

    return 0;
}
