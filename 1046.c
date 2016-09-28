#include <stdio.h>

int main(){

    int hI, hF;

    scanf("%d %d", &hI, &hF);

    if(hF <= hI){
        hF += 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", hF - hI);

    return 0;
}
