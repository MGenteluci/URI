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

    for(i = 0; i <= 4; i++){
        for(j = i+1; j <= 10-i; j++){
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
