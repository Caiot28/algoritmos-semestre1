#include<stdio.h>
#include<math.h>

float calcularVol(float raio, float altura);

main(){

    float altura, raio;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o raio: ");
    scanf("%f", &raio);

    float volume = calcularVol(raio, altura);

    printf("%.2f", volume);
}

float calcularVol(float raio, float altura){

    float volume = 3.1414592 * pow(raio, 2) * altura;
    return volume;
}