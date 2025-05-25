#include<stdio.h>

main(){

    int valores[5], maior = 0, menor = 0, posicaoMaior = 0, posicaoMenor = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
    }

    maior = valores[0];
    menor = valores[0];

    for(int i = 0; i < 5; i++){
        if (valores[i] > maior){
            maior = valores[i];
            posicaoMaior = i;
        } else if (valores[i] < menor){
            menor = valores[i];
            posicaoMenor = i;
        }
    }

    printf("\nMaior valor = %d, posicao = %d", maior, posicaoMaior);
    printf("\nMenor valor = %d, posicao = %d", menor, posicaoMenor);


    
}