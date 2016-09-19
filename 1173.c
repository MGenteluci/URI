#include <stdio.h>

int main(){

    int V, n[10], i;

    scanf("%d", &V);

    for(i=0; i<10; i++){

        if(i == 0){
        n[i] = V;
        }else{
        n[i] = n[i-1]*2;
        }

        printf("N[%d] = %d\n", i, n[i]);

    }



    return 0;
}
