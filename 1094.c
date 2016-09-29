#include <stdio.h>

int main(){

    int n, i, coelho = 0, sapo = 0, rato = 0;
    float cont = 0;

    char tipo;

    scanf("%d", &n);

    int v[n];

    for(i = 0; i < n; i++){

        scanf("%d %c", &v[i], &tipo);

        if( (tipo == 'C') || (tipo == 'c') ){
            coelho += v[i];
            cont += v[i];
        }else if( (tipo == 'R') || (tipo == 'r') ){
            rato += v[i];
            cont += v[i];
        }else if( (tipo == 'S') || (tipo == 's' )  ){
            sapo += v[i];
            cont += v[i];
        }

    }

    float pCoelho = (coelho*100)/cont ;
    float pRato = (rato*100)/cont;
    float pSapo = (sapo*100)/cont;

    printf("Total: %.0f cobaias\n", cont);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", pCoelho);
    printf("Percentual de ratos: %.2f %%\n", pRato);
    printf("Percentual de sapos: %.2f %%\n", pSapo);

    return 0;
}
