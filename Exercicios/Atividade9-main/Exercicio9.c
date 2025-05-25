#include<stdio.h>

main(){

    int valores[6];

    for (int i = 0; i < 6; i++) {
        printf("\nDigite um valor par: ");
        scanf("%d", &valores[i]);
        if (valores[i] % 2 != 0){
            printf("\nNao e par, digite novamente. ");
            i--;
        }
    }

    for (int i = 5; i >= 0; i--) { 
        printf("\n%d", valores[i]);
    }

}