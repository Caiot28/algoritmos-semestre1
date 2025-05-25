#include<stdio.h>
#include<math.h>

float calcularVol(float raio);

main(){

    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    float volume = calcularVol(raio);

    printf("%.2f", volume);

}

float calcularVol(float raio){
    float volume = (3.1414592 *  4 * pow(raio, 3)) / 3;
    return volume;

}