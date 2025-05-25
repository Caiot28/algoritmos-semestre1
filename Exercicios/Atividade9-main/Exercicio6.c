#include<stdio.h>

main (){

    int vetor[10], maiorNum = 0, menorNum = 0;

    for (int i = 0; i < 10; i++) {
    printf("Digite um valor: ");
    scanf("%d", &vetor[i]);
    }

    maiorNum = vetor[0];
    menorNum = vetor[0];

    for(int i = 0; i < 10; i++){

        if(vetor[i] > maiorNum){
            maiorNum = vetor[i];
        } else if(vetor[i] < menorNum){
            menorNum = vetor[i];
    }
    }

    printf("\nO maior numero e %d", maiorNum);
    printf("\nO menor numero e %d", menorNum);



}