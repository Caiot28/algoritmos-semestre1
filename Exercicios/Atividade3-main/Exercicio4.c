#include<stdio.h>

main(){

    float peso;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    if (peso < 60) {
        printf("Peso menor que 60kg");
    } else {
        printf("Peso maio ou igual a 60kg");
    }


}
