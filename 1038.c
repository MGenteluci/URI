#include <stdio.h>

int main(){

    int c, q;
    float total;

    scanf("%d %d", &c, &q);

    if(c == 1){
        total = q*4;
    }else if(c == 2){
        total = q*4.5;
    }else if(c == 3){
        total = q*5;
    }else if(c == 4){
        total = q*2;
    }else if(c == 5){
        total = q*1.5;
    }

    printf("Total: R$ %.2f\n", total);

    return 0;
}
