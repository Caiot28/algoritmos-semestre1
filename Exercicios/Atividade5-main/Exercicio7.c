#include<stdio.h>
#include<math.h>

main(){

    float p1, p2, p3, media;

    printf("Digite a nota da prova 1: ");
    scanf("%f", &p1);
    
    printf("Digite a nota da prova 2: ");
    scanf("%f", &p2);

    printf("Digite a nota da prova 3: ");
    scanf("%f", &p3);

    media = (p1 + p2 + (p3 * 2)) / 4;

    printf("\nSua media e %.2f", media);

    if (media >= 7) {

        printf("\nVoce esta aprovado!");

    } else if (media < 4) {

        printf("\nVoce foi reprovado!");

    } else {

        printf("\nVoce esta de recuperacao!");
    }

}