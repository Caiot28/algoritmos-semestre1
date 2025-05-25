#include<stdio.h>
#include<math.h>

main(){

    float raio, area;

    printf("\nDigite o raio do circulo em centimetros: ");
    scanf("%f", &raio);

    area = pow(raio,2) * 3.1415;

    printf("\nA area do circulo e de %.2f centimetros quadrados\n", area);





}
