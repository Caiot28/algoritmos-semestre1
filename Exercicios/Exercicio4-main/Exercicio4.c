#include<stdio.h>
#include<math.h>

main(){

    int A, B, C;

    printf("Digite os valores de  A, B, C: ");
    scanf("%i %i %i", &A, &B, &C); 

    if (A > B && A > C && B > C) {
        printf("A ordem descendente e: %d, %d, %d", A, B, C);

    } else if (A > B && A > C && C > B) {
        printf("A ordem descendente e: %d, %d, %d", A, C, B);

    } else if (B > A && B > C && A > C) {
        printf("A ordem descendente e: %d, %d, %d", B, A, C);

    } else if (B > A && B > C && C > A) {
        printf("A ordem descendente e: %d, %d, %d", B, C, A);

    } else if (C > A && C > B && A > B) {
        printf("A ordem descendente e: %d, %d, %d", C, A, B);

    } else if (C > A && C > B && B > A) {
        printf("A ordem descendente e: %d, %d, %d", C, B, A);
    }





}