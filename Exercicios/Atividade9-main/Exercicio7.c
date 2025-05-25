#include<stdio.h>

main(){

    int vetor[10], maior = 0, posicao = 0;

    for(int i = 0; i < 10; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) { 
        printf("\nvetor[%d] = %d", i, vetor[i]);
    }

    for(int i = 0; i < 10; i++){

        if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
}

    printf("\nMaior numero = %d, posicao = %d", maior, posicao);

}