#include<stdio.h>
#define TAM 10

main(){

    int vetor[TAM];

    for(int i = 0; i < TAM; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);

        if(vetor[i] < 0){
            vetor[i] = 0;
        }
    }

    for (int i = 0; i < TAM; i++) { 
        printf("\n%d", vetor[i]);
    }




}