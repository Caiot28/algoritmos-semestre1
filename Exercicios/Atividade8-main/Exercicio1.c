#include<stdio.h>

main(){

    int idade, otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0, idadeD = 0;
    int contadorD = 0, maioridadeE = 0, maioridadeA = 0, maioridadeD = 0, diferencaIdadeAeD;
    char nota;
    float difBeC, mediaIdadeD;

    for(int i = 0; i <= 100; i++){
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        fflush(stdin);

        printf("Digite a nota (A, B, C, D ou E): ");
        scanf("%c", &nota);
        printf("\n");

        if(nota == 'A'){
            otimo++;
            if(maioridadeA < idade){
                maioridadeA = idade;
            }

        } else if(nota == 'B'){
            bom++;

        } else if(nota == 'C'){
            regular++;

        } else if(nota == 'D'){
            contadorD++;
            idadeD += idade;
            ruim++;
            if(maioridadeD < idade){
                maioridadeD = idade;
            }

        } else if(nota == 'E'){
            pessimo++;
            if(maioridadeE < idade){
                maioridadeE = idade;
            }

        } else {
            printf("\nTente novamente.");
            i--;
        }
    }

    difBeC = bom - regular;
    mediaIdadeD = idadeD / contadorD;
    diferencaIdadeAeD = maioridadeA - maioridadeD;

    printf("\nQuantidade de respostas otimo: %d", otimo);
    printf("\nDiferenca percentual entre respostas bom e regular: %.2f", difBeC);
    printf("\nMedia de idade das pessoas que responderam ruim: %.2f", mediaIdadeD);
    printf("\nPercentagem de respostas pessimo: %d\nMaior idade que utilizou esta opcao: %d", pessimo, maioridadeE);
    printf("\nDiferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim: %d", diferencaIdadeAeD);


}