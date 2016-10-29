#include <stdio.h>

int main(){

    int t, i, nivel1 = 0, nivel2 = 0, nivel3 = 0;

    while( (scanf("%d", &t)) != EOF){

        int v[t];

        for(i = 0; i < t; i++){

            scanf("%d", &v[i]);

            if(v[i] < 10){
                nivel1++;
            }else if( (v[i] > 10) && (v[i] < 20) ){
                nivel2++;
            }else{
                nivel3++;
            }

        }

        if(nivel3 > 0){
            printf("%d\n", 3);
        }else if(nivel2 > 0){
            printf("%d\n", 2);
        }else{
            printf("%d\n", 1);
        }

        nivel3 = 0; nivel2 = 0; nivel1 = 0;
    }

    return 0;
}
