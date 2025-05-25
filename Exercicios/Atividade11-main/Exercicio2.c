#include<stdio.h>

void meses(int numero);

main(){

    int numero;
    printf("Digite o numero do mes: ");
    scanf("%d", &numero);
    meses(numero);

}

void meses(int numero){
    switch (numero)
    {
    case 1:
       printf("Janeiro. 31");
        break;

    case 2:
       printf("Fevereiro. 28");
        break;

    case 3:
       printf("Marco. 31");
        break;

    case 4:
       printf("Abril. 30");
        break;

    case 5:
       printf("Maio. 31");
        break;

    case 6:
       printf("Junho. 30");
        break;

    case 7:
       printf("Julho. 31");
        break;

    case 8:
       printf("Agosto. 31");
        break;

    case 9:
       printf("Setembro. 30");
        break;

    case 10:
       printf("Outubro. 31");
        break;

    case 11:
       printf("Novembro. 30");
        break;

    case 12:
       printf("Dezembro. 31");
        break;
    
    default:
        printf("\nNumero invalido.");
        break;
    }
}