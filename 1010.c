#include <stdio.h>

int main() {

   int CD1, N1, CD2, N2;
   double V1, V2, V;

   scanf("%d %d %lf", &CD1, &N1, &V1);
   scanf("%d %d %lf", &CD2, &N2, &V2);

   V = (N1*V1)+(N2*V2);

   printf("VALOR A PAGAR: R$ %.2lf", V);
   printf("\n");

    return 0;
}
