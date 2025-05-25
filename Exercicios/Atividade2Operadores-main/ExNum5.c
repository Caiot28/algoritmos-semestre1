#include<stdio.h>
#include<math.h>

main(){

    float custoMercadoria, frete, outrasDespesas, valorVenda, custoTotal, lucro, porcentagemLucro;

    printf("\nDigite o custo da mercadoria: ");
    scanf("%f", &custoMercadoria);

    printf("\nDigite o frete: ");
    scanf("%f", &frete);

    printf("\nDigite outras despesas: ");
    scanf("%f", &outrasDespesas);

    custoTotal = custoMercadoria + frete + outrasDespesas;

    printf("\nO custo total e de %.2f reais\n", custoTotal);

    printf("\nDigite o valor de venda: ");
    scanf("%f", &valorVenda);

    lucro = valorVenda - custoTotal;
    porcentagemLucro = (lucro / custoTotal) * 100;

    printf("\nA porcentagem de lucro foi de %.2f%% \n", porcentagemLucro);













}
