#include<stdio.h>

main(){

    int pedido, qtd, valor, n;
    float valorTotal;

    do
    {
    printf("\n1 - Abacaxi = 5 | 2 - Maca = 1 | 3 - Pera = 4\n");
    printf("Digite o pedido: ");
    scanf("%d", &pedido);

    printf("Digite a quantidade: ");
    scanf("%d", &qtd);


    switch (pedido) {

        case 1:
            valor = 5;
            valorTotal += qtd * valor;
            break;

        case 2:
            valor = 1;
            valorTotal += qtd * valor;
            break;

        case 3:
            valor = 4;
            valorTotal += qtd * valor;
            break;
        default:
        printf("\nFruta nao encontrada");

       }

        printf("\nDeseja adicionar outro item? 0 - Nao / 1 - Sim\n");
        scanf("%d", &n);

    } while (n != 0);
    
    printf("\nValor final: %.2f", valorTotal);




}