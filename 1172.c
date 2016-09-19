#include <stdio.h>

int main(){

    int X[10], i, j = 0;

    for(i=0; i < 10; i++){

    scanf("%d", &X[i]);

        if(X[i] <= 0){
        X[i] = 1;
        }

        printf("X[%d] = %d\n", j, X[i]);

        j++;

    }

    return 0;
}
