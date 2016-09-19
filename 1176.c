#include <stdio.h>

int main(){

    int t, n, i;
    unsigned long long int f[61];

    scanf("%d", &t);

    f[0] = 0;
    f[1] = 1;

    for(i = 2; i < 61; i++){

    f[i] = f[i-1] + f[i-2];

    }

    for(i = 0; i < t; i++){

    scanf("%d", &n);
    printf("Fib(%d) = %llu\n", n, f[n]);

    }

    return 0;
}
