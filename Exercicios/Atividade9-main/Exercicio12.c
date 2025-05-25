#include<stdio.h>

main(){

    int valores[5], maior = 0, menor = 0, soma = 0, contador = 0;
    float media = 0;

    for(int i = 0; i < 5; i++){
        contador++;
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    maior = valores[0];
    menor = valores[0];

    for(int i = 0; i < 5; i++){
        printf("\nvalores[%d] = %d", i, valores[i]);
    }

    for(int i = 0; i < 5; i++){
        if(valores[i] > maior){
            maior = valores[i];
        } else if (valores[i] < menor){
            menor = valores[i];
        }
    }

    media = (float)soma / (float)contador;

    printf("\nMaior numero = %d", maior);
    printf("\nMenor numero = %d", menor);
    printf("\nMedia dos valores = %.2f", media);





}