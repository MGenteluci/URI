#include <stdio.h>

int main(){

    double m[12][12], soma = 0;
    int i, j;
    char O[2];

    scanf("%s", &O);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){

            scanf("%lf", &m[i][j]);

        }
    }

    for(i = 1; i < 12; i++){
        for(j = 11; j >= 12-i; j--){
            soma += m[i][j];
        }
    }

    if(O[0] == 'S'){
        printf("%.1lf\n", soma);
    }else if(O[0] == 'M'){
        printf("%.1lf\n", soma/66);
    }

    return 0;
}
