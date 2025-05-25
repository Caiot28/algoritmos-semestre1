#include<stdio.h>
#include<math.h>

main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero == 5) {
        printf("O numero e igual a 5");

    } else if (numero == 200) {
        printf("O numero e igual a 200");

    } else if (numero == 400) {
        printf("O numero e igual a 400");

    } else if (numero > 500 && numero < 1000) {
        printf("O numero esta entre 500 e 1000");
        
    } else {
        printf("O numero nao obedece as condicoes, tente novamente");
    }

}
