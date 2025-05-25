#include<stdio.h>

main(){

    int valores[10], quadrados[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
        quadrados[i] = valores[i] * valores[i];
    }

    for (int i = 0; i < 10; i++) { 
        printf("\n%d", valores[i]);
    }

    for (int i = 0; i < 10; i++) { 
        printf("\n%d", quadrados[i]);
    }




}