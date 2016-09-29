#include <stdio.h>

int main(){

    int x, i;

    scanf("%d", &x);

    int v[x];

    for(i = 0; i < x; i++){

        scanf("%d", &v[i]);

        if(v[i] == 0){
            printf("NULL\n");
        }else if( (v[i]%2 == 0) && (v[i] < 0) ){
            printf("EVEN NEGATIVE\n");
        }else if( (v[i]%2 != 0) && (v[i] < 0) ){
            printf("ODD NEGATIVE\n");
        }else if( (v[i]%2 != 0) && (v[i] > 0) ){
            printf("ODD POSITIVE\n");
        }else if( (v[i]%2 == 0) && (v[i] > 0) ){
            printf("EVEN POSITIVE\n");
        }

    }

    return 0;
}
