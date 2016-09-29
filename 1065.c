#include <stdio.h>

int main(){

    int v[5], i, valor = 0;

    for(i = 0; i < 5; i++){

        scanf("%d", &v[i]);

        if(v[i]%2 == 0){
            valor++;
        }

    }

        printf("%d valores pares\n", valor);

    return 0;
}
