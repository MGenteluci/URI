#include <stdio.h>

int main(){

    int a, b, q, r, b1, q1;

    scanf("%d %d", &a, &b);

    if(a < 0){

        b1 = b;
        if(b < 0){
            b1 = b*-1;
        }
        for(r = 0; r < b1; r++){

            q = a-r;

            if(q%b == 0){
                break;
            }
        }
            q /= b;

        }else{
            q = a/b;
            r = a%b;
        }

    printf("%d %d\n", q, r);

    return 0;
}
