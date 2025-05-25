#include<stdio.h>
#include<math.h>

main(){

    int A, B, C;

    printf("Digite o numero A: ");
    scanf("%i", &A);

    printf("Digite o numero B: ");
     scanf("%i", &B);

    printf("Digite o numero C: ");
    scanf("%i", &C);

    if (A < B && A < C && B < C) {
        printf("A ordem ascendente e: %d, %d, %d", A, B, C);

    } else if (A < B && A < C && C < B) {
        printf("A ordem ascendente e: %d, %d, %d", A, C, B);

    } else if (B < A && B < C && A < C) {
        printf("A ordem ascendente e: %d, %d, %d", B, A, C);

    } else if (B < A && B < C && C < A) {
        printf("A ordem ascendente e: %d, %d, %d", B, C, A);

    } else if (C < A && C < B && A < B) {
        printf("A ordem ascendente e: %d, %d, %d", C, A, B);

    } else if (C < A && C < B && B < A) {
        printf("A ordem ascendente e: %d, %d, %d", C, B, A);
    }





}