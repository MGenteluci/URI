#include <stdio.h>

int main(){

    double m[12][12], soma = 0;
    char O[2];
    int i, j;

    scanf("%s", &O);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
        }
    }

    for(j = 0; j <= 4; j++){
        for(i = j+1; i <= 10-j; i++){
            soma += m[i][j];
        }
    }

    if(O[0] == 'S'){
        printf("%.1lf\n", soma);
    }else if(O[0] == 'M'){
        printf("%.1lf\n", soma/30);
    }

    return 0;
}
