#include<stdio.h>
#include<math.h>

#define TAM 10

main(){

    float vetor[10];
    float desvioPadrao, media, total, somDiferenca;

    for(int i = 0; i < TAM; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);

        total += vetor[i];
    }

    media = total / TAM;

    for(int i = 0; i < TAM; i++){
        somDiferenca += pow(vetor[i] - media, 2);
    }

    desvioPadrao = sqrt(somDiferenca / 9);

    printf("\nDesvio Padrao: %f", desvioPadrao);

}