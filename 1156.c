#include <stdio.h>

int main(){

    double n = 0, i, x = 1;

    for(i = 1; i < 39; i+=2){

        if(i == 1){
            n+=1;
        }else{
            x *= 2;
            n += (i/x);
        }


    }

    printf("%.2lf\n", n);


    return 0;
}
