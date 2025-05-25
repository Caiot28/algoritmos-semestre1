#include<stdio.h>

main(){

    int vetor[10], contadorNegativos = 0, soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] < 0){
            contadorNegativos++;
        } else {
            soma += vetor[i];
        }
    }

    printf("\nNumero de negativos = %d", contadorNegativos);
    printf("\nSoma = %d", soma);





}