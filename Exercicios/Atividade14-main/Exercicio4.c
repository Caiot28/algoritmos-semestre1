#include<stdio.h>

void trocarValores(int *pont1, int *pont2){
    int temp;
    temp = *pont1;
    *pont1 = *pont2;
    *pont2 = temp;
}

main(){

    int A, B, *pont1, *pont2;

    pont1 = &A;
    pont2 = &B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("\nDigite o valor de B: ");
    scanf("%d", &B);

    printf("\nValor de A: %d\nB: %d", A, B);

    trocarValores(&A, &B);
    printf("\nValores trocados A: %d\nB: %d", A, B);

}