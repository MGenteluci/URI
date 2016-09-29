#include <stdio.h>

int main(){

    int v[100], maior = 0, i, pos = 0;

    for(i = 1; i <= 100; i++){

        scanf("%d", &v[i]);

        if(v[i] > maior){
            maior = v[i];
            pos = i;
        }

    }

    printf("%d\n", maior);
    printf("%d\n", pos);

    return 0;
}
