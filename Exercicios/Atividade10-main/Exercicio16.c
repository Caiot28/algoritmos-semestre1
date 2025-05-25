#include<stdio.h>
#include<stdlib.h>
#define TAM 5

main(){

    int vetor[TAM], codigo;

    for(int i = 0; i < TAM; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("Digite o codigo: ");
    scanf("%d", &codigo);

    if(codigo == 0){
        exit(0);
    } else if (codigo == 1){
        for(int i = 0; i < TAM; i++) { 
        printf("\n%d", vetor[i]);
    }
    } else if (codigo == 2){
        for(int i = TAM - 1; i >= 0; i--){
            printf("\n%d", vetor[i]);
        }
    }

}