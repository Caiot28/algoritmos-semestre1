#include<stdio.h>

main(){

    int num1, num2, *pont1, *pont2;

    pont1 = &num1;
    pont2 = &num2;

    printf("Digite o valor de num1: ");
    scanf("%d", &num1);

    printf("Digite o valor de num2: ");
    scanf("%d", &num2);

    if(pont1 > pont2){
        printf("\nConteudo do maior endereco num1: %d", *pont1);
    } else {
        printf("\nConteudo do maior endereco num2: %d", *pont2);
    }


}