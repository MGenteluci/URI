#include <stdio.h>

int main(){

    int hI, mI, hF, mF;

    scanf("%d %d %d %d", &hI, &mI, &hF, &mF);

    if( (hF <= hI) && (mF < mI) ){
        hF += 23;
    }else if(hF <= hI){
        hF += 24;
    }else if( (hF > hI) && (mF < mI) ){
        hF--;
    }

    if(mF < mI){
        mF += 60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hF - hI, mF - mI);

    return 0;
}
