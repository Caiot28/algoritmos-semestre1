#include<stdio.h>
#include<math.h>

main(){

    double numero;

    printf("Digite um numero: ");
    scanf("%lf", &numero);

    if (numero >= 0){
        numero = sqrt(numero);
        printf("A raiz e: %.3lf", numero);

    } else {
        numero = pow(numero, 2);
        printf("O quadrado do numero e: %.3lf", numero);
    }



}