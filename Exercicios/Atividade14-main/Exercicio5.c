#include<stdio.h>

trocarValor(int *pont1, int *pont2){
    int temp;
    if(*pont1 < *pont2){
    temp = *pont1;
    *pont1 = *pont2;
    *pont2 = temp;
    }
}

main(){

    int Primeira, Segunda, *pont1, *pont2;

    pont1 = &Primeira;
    pont2 = &Segunda;

    printf("Digite o primeiro valor: ");
    scanf("%d", &Primeira);

    printf("\nDigite o segundo valor: ");
    scanf("%d", &Segunda);

    trocarValor(&Primeira, &Segunda);

    printf("Valor primeira variavel: %d\nSegunda: %d", Primeira, Segunda);
}
