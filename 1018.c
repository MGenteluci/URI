#include <stdio.h>

int main (void){

	int c, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
	int cont = 0;

	printf("digite qtd: ");
	scanf("%d", &c);

	notas100 = (c - c%100)/100;
	cont = c%100;

	notas50 = (cont - cont%50)/50;
	cont = cont%50;

	notas20 = (cont - cont%20)/20;
	cont = cont%20;

	notas10 = (cont - cont%10)/10;
	cont = cont%10;

	notas5 = (cont - cont%5)/5;
	cont = cont%5;

	notas2 = (cont - cont%2)/2;
	cont = cont%2;

	notas1 = (cont - cont%1)/1;
	cont = cont%1;



    printf("%d\n", c);
    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n", notas50);
    printf("%d nota(s) de R$ 20,00\n", notas20);
    printf("%d nota(s) de R$ 10,00\n", notas10);
    printf("%d nota(s) de R$ 5,00\n", notas5);
    printf("%d nota(s) de R$ 2,00\n", notas2);
    printf("%d nota(s) de R$ 1,00\n", notas1);

    return 0;
}
