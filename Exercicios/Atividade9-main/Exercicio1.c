#include<stdio.h>

main(){

    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = 0;

    // soma = A[0] + A[1] + A[5]; // letra b
    // printf("Soma: %d", soma);

    A[4] = 100;

    for (int i = 0; i < 6; i++) { // letra b
        if(i == 0 || i == 1 || i == 5){
            soma += A[i];
        }

    }
    printf("Soma: %d", soma);

    for (int i = 0; i < 6; i++) { // letra d
        printf("\n%d", A[i]);
    }

}