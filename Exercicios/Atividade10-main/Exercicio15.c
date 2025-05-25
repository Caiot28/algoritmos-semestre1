#include<stdio.h>
#define TAM 5

main(){

    int vetor[TAM], maior;

    for(int i = 0; i < TAM; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }


    for(int i = 0; i < TAM; i++){
        maior = 0;
        for(int j = i+1; j < TAM; j++){
            if(vetor[i] == vetor[j]){
                maior = 1;
            }
        }
        if(maior != 1){
            printf("\nValores sem repeticao: %d", vetor[i]);
        }
    }

}