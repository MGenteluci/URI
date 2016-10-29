#include <stdio.h>

int main(){

    int g, i, contG = 0, contI = 0, resp, cont = 0, emp = 0;

    do{

        scanf("%d %d", &i, &g);

        if(g == i){
            emp++;
        }else if(g > i){
            contG++;
        }else{
            contI++;
        }

        cont++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &resp);

    }while(resp == 1);

    printf("%d grenais\n", cont);
    printf("Inter:%d\n", contI);
    printf("Gremio:%d\n", contG);
    printf("Empates:%d\n", emp);

    if(contG > contI){printf("Gremio venceu mais\n");}
    else if(contI > contG){printf("Inter venceu mais\n");}

    return 0;
}
