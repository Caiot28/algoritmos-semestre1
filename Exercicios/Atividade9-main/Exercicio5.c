#include<stdio.h>

main (){

    int vetor[10], contador = 0;

    for (int i = 0; i < 10; i++) { 
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            contador++;
        }
    }

    printf("Numero de valores pares: %d", contador);

}