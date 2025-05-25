#include<stdio.h>

main (){

    int vetor[6];

    for (int i = 0; i < 6; i++) {
    printf("Digite um valor: ");
    scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 6; i++) { 
        printf("\n%d", vetor[i]);
    }

}