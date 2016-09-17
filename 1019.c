#include <stdio.h>

int main() {

   int T, H, M, S;

   scanf("%d", &T);

   H = T/3600;
   M = (T - H*3600)/60;
   S = T - (H*3600 + M*60);

   printf("%d:%d:%d", H, M, S);
   printf("\n");

    return 0;
}
