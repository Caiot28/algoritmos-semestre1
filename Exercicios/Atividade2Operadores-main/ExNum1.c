#include<stdio.h>
#include<math.h>

main(){

    int num1, num2, soma, sub, mult;
    float div;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);

    //operacoes

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    
    div = (float)num1 / (float)num2;

    //saida

    printf("\nSoma: %d", soma);
    printf("\nSubtracao: %d", sub);
    printf("\nMultiplicacao: %d", mult);
    printf("\nDivisao: %f", div);


}