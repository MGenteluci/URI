#include <stdio.h>

int main(){

    int T, v[1000], j, i;

    scanf("%d", &T);

    for(i = 0; i < 1000; i++){

        v[i] = i%T;

    }

    for(i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, v[i]);
    }

    return 0;
}
