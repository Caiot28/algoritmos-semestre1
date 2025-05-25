#include<stdio.h>
#include<stdlib.h>

void calcularGratuitas(int locacoes[500], int locacoesGratuitas[500]);

main(){

    int locacoes[500], locacoesGratuitas[500];

    for(int i = 0; i < 500; i++){
        locacoes[i] = rand() % 100 + 1; //preencher com numeros aleatorios
    }

    calcularGratuitas(locacoes, locacoesGratuitas);

    for(int i = 0; i < 500; i++){
        printf("\nTem direito a %d locacoes gratuitas.", locacoesGratuitas[i]);
    }

}

void calcularGratuitas(int locacoes[500], int locacoesGratuitas[500]){
    for(int i = 0; i < 500; i++){
        locacoesGratuitas[i] = locacoes[i] / 15;
    }
    
}

