#include<stdio.h>

main(){

    float notas[15], totalNotas, mediaNotas;
    int contador = 0;

    for(int i = 0; i < 15; i++){
        contador++;
        printf("\nDigite uma nota: ");
        scanf("%f", &notas[i]);
        totalNotas += notas[i];
    }

    mediaNotas = totalNotas / (float)contador;

    printf("\nA media geral e %.2f", mediaNotas);

}