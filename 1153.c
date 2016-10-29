#include <stdio.h>

int main(){

    int n, i, fat = 1;

    scanf("%d", &n);

    for(i = n; i > 1; i--){

        fat *= i;

    }

    printf("%d\n", fat);

    return 0;
}
