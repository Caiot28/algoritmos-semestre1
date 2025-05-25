#include<stdio.h>
#define TAM 50

main(){

    int vetor[TAM];

    for(int i = 0; i < TAM; i++){
        vetor[i] = (i + (5 * i)) % (i + 1);
    }
    
    for (int i = 0; i < TAM; i++) { 
        printf("\n%d", vetor[i]);
    }



}