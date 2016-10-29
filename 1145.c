#include <stdio.h>

int main(){

    int x, y, i, cont = 0;

    scanf("%d %d", &x, &y);

    for(i = 1; i <= y ; i++){

            if(i%x==0){
                printf("%d", i);
            }else{
                printf("%d ", i);
            }


        if(i%x==0){
            printf("\n");
        }

    }

    return 0;
}
