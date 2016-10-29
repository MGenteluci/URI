#include <stdio.h>

int main(){

    int t, pA, pB, cont = 0, i;
    double cA, cB;

    scanf("%d", &t);

    for(i = 0; i < t; i++){

        scanf("%d %d %lf %lf", &pA, &pB, &cA, &cB);

        do{

            pA += pA*cA/100;
            pB += pB*cB/100;
            cont++;

            if(cont > 100 ){
            printf("Mais de 1 seculo.\n");
            break;
        }

        }while(pA <= pB);


        if (cont <= 100){
            printf("%d anos.\n", cont);
        }

        cont = 0;

    }

    return 0;
}
