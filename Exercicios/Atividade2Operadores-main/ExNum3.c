#include<stdio.h>
#include<math.h>

main(){

    float comprimento, largura, area;

    printf("\nDigite o comprimento em metros: ");
    scanf("%f", &comprimento);

    
    printf("\nDigite a largura em metros: ");
    scanf("%f", &largura);

    area = comprimento * largura;

    printf("\nA area em metros quadrados e: %.2f", area);


}
