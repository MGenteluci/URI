#include <stdio.h>

int main(){

    int n, par[5], impar[5], imp=0, p=0, i, j;

    for(i = 0; i < 15; i++){

    scanf("%d", &n);

    if(n%2 == 0){
        par[p] = n;
        p++;
            if(p == 5){
                for(j = 0; j < 5; j++){
                printf("par[%d] = %d\n", j, par[j]);
                }
            p = 0;
            }

    }else{
        impar[imp] = n;
        imp++;
            if(imp == 5){
                for(j = 0; j < 5; j++){
                printf("impar[%d] = %d\n", j, impar[j]);
                }
            imp = 0;
            }


        }

    }

    for(j = 0; j < imp; j++)
        printf("impar[%d] = %d\n", j, impar[j]);

    for(j = 0; j < p; j++)
        printf("par[%d] = %d\n", j, par[j]);

    return 0;
}
