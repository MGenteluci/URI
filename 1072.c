#include <stdio.h>

int main(){

    int x, i, in = 0, out = 0;

    scanf("%d", &x);

    int v[x];

    for(i = 0; i < x; i++){

        scanf("%d", &v[x]);

        if( (v[x] >= 10 ) && (v[x] <= 20)  ){
            in++;
        }else{
            out++;
        }


    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
