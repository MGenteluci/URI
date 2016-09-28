#include <stdio.h>

int main(){

    float v[6];
    int i, valor = 0;

    for(i = 0; i < 6; i++){

        scanf("%f", &v[i]);

        while(v[i] == 0){
            scanf("%f", &v[i]);
        }

        if(v[i] > 0){
        valor++;
        }

    }

    printf("%d valores positivos\n", valor);

    return 0;
}
