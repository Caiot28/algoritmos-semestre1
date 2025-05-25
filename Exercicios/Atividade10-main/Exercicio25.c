#include<stdio.h>
#define TAM 100
main(){

    int numeros[TAM], naturais = 0;

    for(int i = 0; i < TAM; i++){
        naturais++;
        if(naturais % 10 == 7 || naturais % 7 != 0){
            numeros[i] = naturais;
        } else {
            i--;
        }
    }

    for (int i = 0; i < TAM; i++) { 
        printf("\n%d", numeros[i]);
    }


}