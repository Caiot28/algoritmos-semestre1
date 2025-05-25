#include<stdio.h>
#include<math.h>

main(){

    int a, b, c;
    double delta;
    float raiz1, raiz2;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
 
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if (a == 0) {

        printf("Nao e equacao de segundo grau");

    } else {

        delta = pow(b, 2) - (a * c * 4);
    
        printf("Valor de delta = %.0lf", delta);

        if (delta == 0) {

        raiz1 = -b  / (a * 2);
        printf("\nValor da raiz unica = %.2f", raiz1);

    }   else if (delta > 0) {

        raiz1 = (-b + sqrt(delta)) / (a * 2);
        raiz2 = (-b - sqrt(delta)) / (a * 2);

        printf("\nValor das raizes: %.2f e %.2f", raiz1, raiz2);

    }   else {

        printf("\nNao e equacao de segundo grau");

    }

    }


}