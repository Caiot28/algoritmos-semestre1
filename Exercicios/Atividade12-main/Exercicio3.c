#include<stdio.h>
#include<stdlib.h>
#define TAM 10

void trocarL2L8(int matriz[TAM][TAM]);
void trocarC4C10(int matriz[TAM][TAM]);
void trocarDiagonais(int matriz[TAM][TAM]);
void trocarL5C10(int matriz[TAM][TAM]);

main(){

    int matriz[TAM][TAM];

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
        matriz[i][j] = rand() % 100 + 1;
    }
}

    for(int i = 0; i < TAM; i++){
        printf("Linha %d: ", i + 1);
        for(int j = 0; j < TAM; j++){
            printf("%d\t", matriz[i][j]);
        }
    printf("\n");
    }

    printf("\n\n\n");

    trocarL2L8(matriz);
    trocarC4C10(matriz);
    trocarDiagonais(matriz);
    trocarL5C10(matriz);

    for(int i = 0; i < TAM; i++){
        printf("Linha %d: ", i + 1);
        for(int j = 0; j < TAM; j++){
            printf("%d\t", matriz[i][j]);
        }
    printf("\n");
    }

}


void trocarL2L8(int matriz[TAM][TAM]){
    int aux;
    for(int i = 0; i < TAM; i++){
        aux = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = aux;
    }
}

void trocarC4C10(int matriz[TAM][TAM]){
    int aux;
    for(int i = 0; i < TAM; i++){
        aux = matriz[i][9];
        matriz[i][9] = matriz[i][3];
        matriz[i][3] = aux;
    }
}

void trocarDiagonais(int matriz[TAM][TAM]){
    int aux;
    for(int i = 0; i < TAM; i++){
        aux = matriz[i][i];
        matriz[i][i] = matriz[i][9-i];
        matriz[i][9-i] = aux;
    }
}

void trocarL5C10(int matriz[TAM][TAM]){
    int aux;
    for(int i = 0; i < TAM; i++){
        aux = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = aux;
    }
}