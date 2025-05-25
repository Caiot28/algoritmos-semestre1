#include<stdio.h>
#define TAM 5
main(){

    int vetor[TAM];

    for(int i = 0; i < TAM; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }


    for(int i = 0; i < TAM; i++){
        for(int j = i+1; j < TAM; j++){
            if(vetor[i] == vetor[j]){
                printf("\nValor igual = %d, posicao[%d] e [%d]", vetor[i], i, j);
            }
        }
    }

}