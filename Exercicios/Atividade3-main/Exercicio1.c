#include<stdio.h>

main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("E maior de idade");

    } else {
        printf("Nao e maior de idade");
    }



}