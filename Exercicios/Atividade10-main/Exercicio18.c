#include<stdio.h>
#define TAM 10

main(){

    int vetor[TAM], x;

    for(int i = 0; i < TAM; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    for(int i = 0; i < TAM; i++){
        if(vetor[i] % x == 0){
            printf("\n%d", vetor[i]);
        }
    }


}