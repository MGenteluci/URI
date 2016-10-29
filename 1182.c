#include <stdio.h>

int main(){

    int c, i, j;
    char O[2];
    double m[12][12], soma = 0;

    scanf("%d", &c);
    scanf("%s", &O);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){

            scanf("%lf", &m[i][j]);

            if(c == j){
                soma += m[i][j];
            }

        }

    }

    if(O[0] == 'S'){
        printf("%.1lf\n", soma);
    }else if(O[0] == 'M'){
        printf("%.1f\n", soma/12);
    }

    return 0;
}
