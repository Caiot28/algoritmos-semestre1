#include<stdio.h>

main(){

    float salario, salarioMinimo = 1320;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    if (salario >= salarioMinimo){
        printf("Maior ou igual ao salario minimo");

    } else {
        printf("Menor que o salario minimo");
    }



}