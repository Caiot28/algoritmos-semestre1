#include<stdio.h>
#include<math.h>

main(){

    int A, B, C, D, maior, menor;

    printf("Digite o numero A: ");
    scanf("%i", &A);

    printf("Digite o numero B: ");
     scanf("%i", &B);

    printf("Digite o numero C: ");
    scanf("%i", &C);

    printf("Digite o numero D: ");
    scanf("%i", &D);

    if (A >= B && A >= C && A >= D) {
        maior = A;
        
    } else if (B >= A && B >= C && B >= D) {
        maior = B;
        
    } else if (C >= A && C >= B && C >= D) {
        maior = C;
       
    } else {
        maior = D;   
    }

    if (A <= B && A <= C && A <= D) {
        menor = A;
        
    } else if (B <= A && B <= C && B <= D) {
        menor = B;
        
    } else if (C <= A && C <= B && C <= D) {
        menor = C;
       
    } else {
        menor = D;
}
    printf("\nO maior numero e: %d", maior);
    printf("\nO menor numero e: %d", menor);


}