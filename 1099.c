#include <stdio.h>

int main(){

    int n, i, a, b, j, soma = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        scanf("%d %d", &a, &b);

        if(b > a){
            if(a%2 != 0) a++;
            for(j = a; j < b; j++){

                if(j%2 != 0){
                    soma += j;
                }

            }
        }else if(a > b){
            if(b%2 != 0) b++;
            for(j = b; j < a; j++){

                if(j%2 != 0){
                    soma += j;
                }

            }
        }

            printf("%d\n", soma);
            soma = 0;

    }

    return 0;
}
