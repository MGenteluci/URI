#include <stdio.h>

int main() {

    int I, A, M, D;

    printf("total de dias: ");
    scanf("%d", &I);

    A = I/365;
    M = (I % 365) / 30;
    D = (I % 365) % 30;

    printf("%d ano(s)\n", A);
    printf("%d mes(es)\n", M);
    printf("%d dia(s)\n", D);

    return 0;
}
