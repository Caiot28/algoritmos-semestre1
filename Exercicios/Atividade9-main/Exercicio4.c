#include<stdio.h>

main (){

    int vetor[8], X, Y, soma = 0;

    for (int i = 0; i < 8; i++) { 
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }

    do{
    printf("\nDigite a posicao de X (0 - 7): ");
    scanf("%d", &X);
    printf("\nDigite a posicao de Y (0 - 7): ");
    scanf("%d", &Y);

    if (X < 0 || X > 7 || Y < 0 || Y > 7){
        printf("\nIndice invalido");
    }
    }while(X < 0 || X > 7 || Y < 0 || Y > 7);


    for(int i = 0; i < 8; i++){ // outro jeito
        if(i == X){
            soma += vetor[i];
        }
        if(i == Y){
            soma += vetor[i];
        }
    }

    printf("\nSoma indice[%d] e indice[%d]: %d", X, Y, soma);


    // soma = vetor[X] + vetor[Y];

    // printf("\nSoma indice[%d] e indice[%d]: %d", X, Y, soma);


}