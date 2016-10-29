#include <stdio.h>

int main(){

    int x, i ,soma = 0;

        do{

            scanf("%d", &x);

            if(x != 0){
                for(i = x; i < x+10; i++){

                    if(i%2 == 0){
                        soma += i;
                    }

                }

                printf("%d\n", soma);
                soma = 0;
            }

        }while(x != 0);

    return 0;
}
