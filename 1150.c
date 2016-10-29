#include <stdio.h>

int main(){

    int x, z, cont = 0, i;

    scanf("%d %d", &x, &z);

    while(z <= x){
        scanf("%d", &z);
    }

    for(i = x; x < z; x++){

        x += i;
        cont++;

    }

    if(x > z && cont == 1){
        cont++;
    }

    printf("%d\n", cont);

    return 0;
}
