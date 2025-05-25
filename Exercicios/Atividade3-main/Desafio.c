#include<stdio.h>

main(){

    float media;

    printf("Digite sua media: ");
    scanf("%f", &media);
    
    if (media >= 7.0){
        printf("Aprovado!");

    } else if (media < 4){
        printf("Reprovado");

    } else {
        printf("Recuperacao");
    }



}
