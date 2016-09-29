#include <stdio.h>

int main(){

    int x, y, z = 0, i, soma = 0;

    scanf("%d %d", &x, &y);

    if(x <= y){
        for(i = x; i < y; i++){

            if(i%2 != 0){
                soma += i;
            }

        }
    }else if(x > y){

        if(y%2 != 0){
        y++;
        }

        for(i = y; i < x; i++){

            if(i%2 != 0){
                soma += i;
            }

        }
    }

        printf("%d\n", soma);

    return 0;
}


