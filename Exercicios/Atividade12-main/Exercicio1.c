#include<stdio.h>

int escolherOpcao();
void aVista(float valorCompra);
void duasVezes(float valorCompra);
void maisDeTresVezes(float valorCompra);

main(){

    float valorCompra;

    printf("Digite o total da compra: ");
    scanf("%f", &valorCompra);
    
    int opcaoPag = escolherOpcao();
    switch (opcaoPag)
    {
    case 1:
        aVista(valorCompra);
        break;

    case 2:
        duasVezes(valorCompra);
        break;

    case 3:
        maisDeTresVezes(valorCompra);
        break;
    
    default:
        printf("\nOpcao invalida.");
        break;
    }

}

int escolherOpcao(){
    int opcaoPag;
    printf("\nDigite a opcao de pagamento.\n1 (a vista)\n2 (duas vezes)\n3 (3 a 10 vezes): ");
    scanf("%d", &opcaoPag);
    return opcaoPag;
}

void aVista(float valorCompra){
    float valorParcela = valorCompra - (valorCompra * 0.1);
    printf("\nValor da prestacao: %.2f", valorParcela);
}

void duasVezes(float valorCompra){
    float valorParcela = valorCompra / 2;
    printf("\nValor das prestacoes: %.2f", valorParcela);
}

void maisDeTresVezes(float valorCompra){
    if(valorCompra < 100){
        printf("Valor menor que 100 nao pode ser parcelado.");
        return;
    } 

    int parcelas;

    do{
    printf("\nDigite o numero de parcelas: ");
    scanf("%d", &parcelas);

    if(parcelas < 3 || parcelas > 10){
        printf("\nQuantidade de parcelas invalida.\nTente novamente");
    }

    } while(parcelas < 3 || parcelas > 10);

    float valorParcela = (valorCompra + (valorCompra * (parcelas * 0.03))) / parcelas;
    printf("\nValor das parcelas: %.2f", valorParcela);
    
}