#include <stdio.h>

int main(){

    int n, x, y, soma = 0, i, j, z;

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        scanf("%d %d", &x, &y);

        for(j = x; j < x+(2*y); j++){

                if(j%2 != 0){
                    soma += j;
                }

        }

        printf("%d\n", soma);
        soma = 0;

    }


    return 0;
}
