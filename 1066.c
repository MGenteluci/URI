#include <stdio.h>

int main(){

    int v[5], impar = 0, par = 0, pos = 0, neg = 0, i;

        for(i = 0; i < 5; i++){

            scanf("%d", &v[i]);

            if(v[i]%2 == 0){
                par++;
            }else{
                impar++;
            }

            if(v[i] > 0){
                pos++;
            }else if(v[i] < 0){
                neg++;
            }

        }

            printf("%d valor(es) par(es)\n", par);
            printf("%d valor(es) impar(es)\n", impar);
            printf("%d valor(es) positivo(s)\n", pos);
            printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}
