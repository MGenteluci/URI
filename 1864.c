#include <stdio.h>

int main(){

    int n, i;
    char v[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        if(i != n){
            printf("%c", v[i-1]);
        }else{
            printf("%c\n", v[i-1]);
        }

    }

    return 0;
}
