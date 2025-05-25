#include<stdio.h>

main(){

    int Prato, Sobremesa, Bebida, CaloriasPrato, CaloriasSobrem, CaloriasBebida, TotalCalorias;
    

    printf("Digite o numero do prato: ");
    scanf("%d", &Prato);

    switch(Prato) {

        case 1:
            CaloriasPrato = 180;
            break;

        case 2:
            CaloriasPrato = 230;
            break;

        case 3:
            CaloriasPrato = 250;
            break;

        case 4:
            CaloriasPrato = 350;
            break;

        default: 
        printf("Codigo do prato errado.");
    }

    printf("Digite o numero da sobremesa: ");
    scanf("%d", &Sobremesa);

    switch(Sobremesa) {

        case 1:
            CaloriasSobrem = 75;
            break;

        case 2:
            CaloriasSobrem = 110;
            break;

        case 3:
            CaloriasSobrem = 170;
            break;

        case 4:
            CaloriasSobrem = 200;
            break;

        default: 
        printf("Codigo da sobremesa errado.");


    }

    printf("Digite o numero da bebida: ");
    scanf("%d", &Bebida);

    switch(Bebida) {

        case 1:
            CaloriasBebida = 20;
            break;

        case 2:
            CaloriasBebida = 70;
            break;

        case 3:
            CaloriasBebida = 100;
            break;

        case 4:
            CaloriasBebida = 65;
            break;

        default: 
        printf("Codigo da bebida errado.");

    }
    
    TotalCalorias = CaloriasPrato + CaloriasBebida + CaloriasSobrem;
    printf("O total de calorias e: %d", TotalCalorias);

}
