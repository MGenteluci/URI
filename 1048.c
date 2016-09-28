#include <stdio.h>

int main(){

    float salario, salarioFinal, bonus;
    int percentual;

    scanf("%f", &salario);

    if(salario <= 400){
    percentual = 15;
    }else if( (salario > 400) && (salario <= 800) ){
    percentual = 12;
    }else if( (salario > 800) && (salario <= 1200) ){
    percentual = 10;
    }else if( (salario > 1200) && (salario <= 2000) ){
    percentual = 7;
    }else if(salario > 2000){
    percentual = 4;
    }

    bonus = (salario/100)*percentual;
    salarioFinal = salario+bonus;

    printf("Novo salario: %.2f\n", salarioFinal);
    printf("Reajuste ganho: %.2f\n", bonus);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}
