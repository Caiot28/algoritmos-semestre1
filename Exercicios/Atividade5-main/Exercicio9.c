#include<stdio.h>
#include<math.h>

main(){

    float salarioAtual, salarioNovo, bonus, tempoServico;

    printf("Digite seu salario: ");
    scanf("%f", &salarioAtual);

    printf("Digite seu tempo de servico em anos: ");
    scanf("%f", &tempoServico);
    

    if (salarioAtual <= 500) {

        salarioNovo = salarioAtual + (salarioAtual * 0.25);

    } else if (salarioAtual <= 1000) {

        salarioNovo = salarioAtual + (salarioAtual * 0.2);

    } else if (salarioAtual <= 1500) {

        salarioNovo = salarioAtual + (salarioAtual * 0.15);

    } else if (salarioAtual <= 2000) {

        salarioNovo = salarioAtual + (salarioAtual * 0.1);

    } else {

        salarioNovo = salarioAtual;
    }
    

    if (tempoServico >= 1 && tempoServico <= 3) {

        bonus = 100;

    } else if (tempoServico >= 4 && tempoServico <= 6) {

        bonus = 200;

    } else if (tempoServico >= 7 && tempoServico <= 10) {

        bonus =  300;

    } else if (tempoServico > 10) {

        bonus = 500;
    } 

    salarioNovo = salarioNovo + bonus;

    
    if (salarioNovo == salarioAtual) {

    printf("Nao tem direito a reajuste");

    } else {

    printf("Seu novo salario e: %.2f", salarioNovo);
    }

}
    



