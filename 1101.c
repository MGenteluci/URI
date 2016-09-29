#include <stdio.h>

int main(){

    int i, soma = 0, j, a, b;

    do{ scanf("%d %d", &a, &b);

        if( (a <= 0) || (b <= 0) ){

        }else if(a < b){
            for(j = a; j <= b; j++){
                printf("%d ", j);
                soma+= j;
            }
                printf("Sum=%d\n", soma);
                soma = 0;

        }else if(b < a){
            for(j = b; j <= a; j++){
                printf("%d ", j);
                soma+= j;
            }
                printf("Sum=%d\n", soma);
                soma = 0;
        }

    }while( (a > 0) && (b > 0)  );

    return 0;
}
