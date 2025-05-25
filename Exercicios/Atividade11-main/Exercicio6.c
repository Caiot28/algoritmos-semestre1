#include<stdio.h>
#include<math.h>

float calcularIMC(float peso, float altura);

main(){

    float peso, altura, IMC;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    IMC = calcularIMC(peso, altura);

    printf("Seu IMC e: %.2f", IMC);

}

float calcularIMC(float peso, float altura){
    float IMC = peso / pow(altura, 2);
    return IMC;
}