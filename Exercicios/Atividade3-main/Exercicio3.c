#include<stdio.h>

main(){

    float altura;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if (altura > 1.8){
        printf("Maior que 1.8m");
    } else {
        printf("Menor ou igual a 1.8");
    }

}
