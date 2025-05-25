#include<stdio.h>

main(){

    int v[10], tamanho1 = 0, tamanho2 = 0, v1[10], v2[10];

        for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &v[i]);

            if(v[i] % 2 == 0){
            v2[tamanho2] = v[i];
            tamanho2++;
            } else {
            v1[tamanho1] = v[i];
            tamanho1++;
            }

        }

        for (int i = 0; i < 10; i++) { 
        printf("\nV1: %d", v[i]);
        }

        for (int i = 0; i < tamanho1; i++) { 
        printf("\nV2: %d", v1[i]);
        }

        for (int i = 0; i < tamanho2; i++) { 
        printf("\nV3: %d", v2[i]);
        }

}

