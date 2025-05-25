#include<stdio.h>

main (){

    int numero, contador;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (contador = 0; contador < numero; contador++) {
        contador++;
        printf("%d, ", contador);
              
    }
    



}
