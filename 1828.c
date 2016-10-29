#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    int i;
    char S[10], R[10];

    for(i = 1; i <= n; i++){

        scanf("%s %s", &S, &R);

        if( (S[0] == 't') && (R[2] == 'p') ){
            printf("Caso #%d: Bazinga!\n", i);
        }else if( (R[0] == 't') && (S[2] == 'p') ){
            printf("Caso #%d: Raj trapaceou!\n", i);
        }else if( (S[2] == 'p') && (R[2] == 'd') ){
            printf("Caso #%d: Bazinga!\n", i);
        }else if( (R[2] == 'p') && (S[2] == 'd') ){
            printf("Caso #%d: Raj trapaceou!\n", i);
        }else if( (S[2] == 'd') && (R[0] == 'l') ){
            printf("Caso #%d: Bazinga!\n", i);
        }else if( (R[2] == 'd') && (S[0] == 'l') ){
            printf("Caso #%d: Raj trapaceou!\n", i);
        }else if( (S[0] == 'l') && (R[4] == 'k') ){
            printf("Caso #%d: Bazinga!\n", i);
        }else if( (R[0] == 'l') && (S[4] == 'k') ){
            printf("Caso #%d: Raj trapaceou!\n", i);
        }else if( (S[4] == 'k') && (R[0] == 't') ){
            printf("Caso #%d: Bazinga!\n", i);
        }else if( (R[4] == 'k') && (S[0] == 't') ){
            printf("Caso #%d: Raj trapaceou!\n", i);
        }else if( (S[0] == 't') && (R[0] == 'l') ){
            printf("Caso #%d: Bazinga!\n", i);
        }else if( (R[0] == 't') && (S[0] == 'l') ){
            printf("Caso #%d: Raj trapaceou!\n", i);
        }else if( (S[0] == 'l') && (R[2] == 'p') ){
            printf("Caso #%d: Bazinga!\n", i);
        }else if( (R[0] == 'l') && (S[2] == 'p') ){
            printf("Caso #%d: Raj trapaceou!\n", i);
        }else if( (S[2] == 'p') && (R[4] == 'k') ){
            printf("Caso #%d: Bazinga!\n", i);
        }else if( (R[2] == 'p') && (S[4] == 'k') ){
            printf("Caso #%d: Raj trapaceou!\n", i);
        }else if( (S[4] == 'k') && (R[2] == 'd') ){
            printf("Caso #%d: Bazinga!\n", i);
        }else if( (R[4] == 'k') && (S[2] == 'd') ){
            printf("Caso #%d: Raj trapaceou!\n", i);
        }else if( (S[2] == 'd') && (R[0] == 't') ){
            printf("Caso #%d: Bazinga!\n", i);
        }else if( (R[2] == 'd') && (S[0] == 't') ){
            printf("Caso #%d: Raj trapaceou!\n", i);
        }else{
            printf("Caso #%d: De novo!\n", i);
        }


    }

    return 0;
}
