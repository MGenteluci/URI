#include <stdio.h>

int main(){

    int n, i;
    float d, a, b;

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        scanf("%f %f", &a, &b);

        if(b == 0){
            printf("divisao impossivel\n");
        }else{
            d = a/b;
            printf("%.1f\n", d);
        }

    }

    return 0;
}
