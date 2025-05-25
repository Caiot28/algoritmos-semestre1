#include<stdio.h>

int diasNoMes(int mes);
void calcularIdade(int diaNas, int mesNas, int anoNas, int ano, int mes, int dia);

main(){

    int dia, mes, ano;
    int diaNas, anoNas, mesNas;

    printf("Digite sua data de nascimento: dd mm aaaa\n");
    scanf("%d %d %d", &diaNas, &mesNas, &anoNas);

    printf("Digite a data atual: dd mm aaaa\n");
    scanf("%d %d %d", &dia, &mes, &ano);

    calcularIdade(diaNas, mesNas, anoNas, ano, mes, dia);

}

int diasNoMes(int mes){
    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return diasMes[mes - 1];
}

void calcularIdade(int diaNas, int mesNas, int anoNas, int ano, int mes, int dia){
    int anos, meses, dias;
    if(dia >= diaNas){
        dias = dia - diaNas;
    } else {
        dias = dia + diasNoMes(mesNas) - diaNas;
        mes--;
    }
    if(mes >= mesNas){
        meses = mes - mesNas;
    } else {
        meses = mes + 12 - mesNas;
        ano--;
    }

    anos = ano - anoNas;

        printf("Idade: %d anos, %d meses, %d dias", anos, meses, dias);
}