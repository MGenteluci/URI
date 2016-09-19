#include <stdio.h>
#define MAX 100

int main(){

    int i;
    double A[MAX];

    for (i=0; i<MAX; i++){

        scanf("%lf", &A[i]);

    }

    for(i=0; i<MAX; i++){

     if(A[i] <= 10){
        printf("A[%d] = %.1lf\n", i, A[i]);
        }

    }

    return 0;
}
