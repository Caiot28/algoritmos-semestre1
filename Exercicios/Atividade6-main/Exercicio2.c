#include<stdio.h>

main(){

    int Pedido, Qtd, novoLanche;
    float ValorTotal, ValorLanche;

    do {
    printf("\nCardapio: 100 - Cachorro quente = 10,10 \n 101 - Bauru simples = 8,30 \n 102 - Bauru com ovo = 8,50 \n 103 - Hamburguer = 12,5 \n 104 - Cheeseburguer = 13,25\n");
    printf("Digite o pedido: ");
    scanf("%d", &Pedido);

    printf("Digite a quantidade: ");
    scanf("%d", &Qtd);


    
    switch(Pedido) {

        case 100:
            ValorLanche = 10.10;
            ValorTotal += Qtd * ValorLanche;            
            break;

        case 101:
            ValorLanche = 8.30;
            ValorTotal += Qtd * ValorLanche; 
            break;

        case 102:
            ValorLanche = 8.50;
            ValorTotal += Qtd * ValorLanche; 
            break;

        case 103:
            ValorLanche = 12.50;
            ValorTotal += Qtd * ValorLanche; 
            break;

        case 104:
            ValorLanche = 13.25;
            ValorTotal += Qtd * ValorLanche; 
            break;
        default:
        printf("\nLanche nao encontrado");

    }

    printf("\nDeseja adicionar outro item? 0 - Nao / 1 - Sim\n");

    scanf("%d", &novoLanche);


    } while (novoLanche != 0);

    printf("\nValor final: %.2f", ValorTotal);




}