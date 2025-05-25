#include<stdio.h>

float conversaoTemp(float Fahrenheit);

main(){

float Fahrenheit;

printf("Digite a temperatura em Fahrenheit: ");
scanf("%f", &Fahrenheit);

float Resultado = conversaoTemp(Fahrenheit);

printf("%.2f", Resultado);

}

float conversaoTemp(float Fahrenheit){

    float Celsius = (Fahrenheit - 32) * 5 / 9;
    return Celsius;
}