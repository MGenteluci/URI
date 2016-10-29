#include <stdio.h>

int main(){

    int l, i, j;
    char OP[2];
    double m[12][12], soma = 0;

    scanf("%d", &l);
    scanf("%s", &OP);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){

            scanf("%lf", &m[i][j]);

            if(i == l){
            soma += m[i][j];
            }

        }

    }

    if(OP[0] == 'S'){
        printf("%.1lf\n", soma);
    }else if(OP[0] == 'M'){
        printf("%.1lf\n", soma/12);
    }

    return 0;
}
