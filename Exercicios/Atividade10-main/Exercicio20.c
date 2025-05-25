#include<stdio.h>
#define TAM 5

main(){

    int vetor[TAM], impares[TAM];

    
    for(int i = 0; i < TAM; i++){
        printf("\nDigite um numero de 0 a 50: ");
        scanf("%d", &vetor[i]);

        if(vetor[i] > 50){
            printf("Numero maior que 50. Tente novamente");
            i--;
        } else if(vetor[i] < 0){
            printf("Numero menor que 0. Tente novamente");
            i--;
        }
    }  

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(vetor[i] % 2 != 0){
            impares[j] = vetor[i];
            }
        }
    }
    
    for (int i = 0; i < TAM; i++) { 
        printf("\n%d", vetor[i]);
    }

        for (int j = 0; j < TAM; j++) { 
        printf("\n.%d", impares[j]);
    }
    
    


}