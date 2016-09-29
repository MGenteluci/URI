#include <stdio.h>

int main(){

    int pwd;

    do{scanf("%d", &pwd);

        if(pwd == 2002){
            printf("Acesso Permitido\n");
        }else{
            printf("Senha Invalida\n");
        }

    }while( (pwd != 2002) );

    return 0;
}
