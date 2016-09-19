#include <stdio.h>

int main(){

    char n[20];
    double sFixo, montante;

    scanf("%s", &n);
    scanf("%lf %lf", &sFixo, &montante);

    sFixo += montante*0.15;

    printf("TOTAL = R$ %.2lf\n", sFixo);

    return 0;
}
