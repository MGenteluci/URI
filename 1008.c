#include <stdio.h>

int main() {

    int NUMBER, H;
    double SALARY;
    double V;

    scanf("%d %d", &NUMBER, &H);
    scanf("%lf", &V);

    SALARY = (H*V);

    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f", SALARY);
    printf("\n");

    return 0;
}
