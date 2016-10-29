#include <stdio.h>

int main(){

    int n, i;

    scanf("%d", &n);

    int v[n];

    v[0] = 0;
    v[1] = 1;

    for(i = 2; i < n; i++){

        v[i] = v[i-1] + v[i-2];

    }

        printf("%d %d", v[0], v[1]);
    for(i = 2; i < n; i++){

            printf(" %d", v[i]);

    }
        printf("\n");

    return 0;
}
