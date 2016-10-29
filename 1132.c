#include <stdio.h>

int main(){

    int x, y, soma = 0, i;

    scanf("%d %d", &x, &y);


    if(y > x){
    for(i = x; i <= y; i++){

        if(i%13 != 0){
            soma += i;
        }

    }
    }else{

    for(i = y; i <= x; i++){

        if(i%13 != 0){
            soma += i;
        }

    }

    }


    printf("%d\n", soma);

    return 0;
}
