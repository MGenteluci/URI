#include <stdio.h>

int main(){

    char vert[20], tipo[20], classe[20];

    scanf("%s %s %s", &vert, &tipo, &classe);

    if(vert[0] == 'v'){

        if(tipo[0] == 'a'){
            if(classe[0] == 'c') printf("aguia\n");
            else printf("pomba\n");
        }

        else if(tipo[0] == 'm'){
            if(classe[0] == 'o') printf("homem\n");
            else printf("vaca\n");
        }

    }else if(vert[0] == 'i'){

        if(tipo[0] == 'i'){
            if(classe[2] == 'm') printf("pulga\n");
            else printf("lagarta\n");
        }

        else if(tipo[0] == 'a'){
            if(classe[0] == 'h') printf("sanguessuga\n");
            else printf("minhoca\n");
        }
    }

    return 0;
}
