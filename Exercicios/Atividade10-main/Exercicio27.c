#include<stdio.h>
#define TAM 10

main(){

    int vetor[TAM];

    for(int i = 0; i < TAM; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);

    }
    
    //resolucao do chatGPT
    for(int i = 0; i < TAM; i++){
        int primo = 1;

        if (vetor[i] <= 1){
            primo = 0;
        } else {
            for(int j = 2; j * j <= vetor[i]; j++){
                if(vetor[i] % j == 0){
                    primo = 0;
                    break;
                }
            }
        }
        if(primo){
            printf("\nNumero %d na posicao %d e primo.", vetor[i], i);
        }
    }

}