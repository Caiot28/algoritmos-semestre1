#include<stdio.h>
#include<stdlib.h>

void somarColuna(int matriz[61][10]);
void imprimir(int matriz[61][10]);

main(){

    int matriz[61][10];

    for(int i = 0; i < 61; i++){
        for(int j = 0; j < 10; j++){
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    somarColuna(matriz);
    imprimir(matriz);

}

void somarColuna(int matriz[61][10]){
    for(int j = 0; j < 10; j++){
        matriz[60][j] = 0;
    }

    for(int j = 0; j < 10; j++){
        for(int i = 0; i < 60; i++){
            matriz[60][j] += matriz[i][j];
        }
    }

}
void imprimir(int matriz[61][10]){
    for(int i = 0; i < 61; i++){
        printf("Linha %d: ", i + 1);
        for(int j = 0; j < 10; j++){
            printf("%d\t", matriz[i][j]);
        }
    printf("\n");
    }

}