#include<stdio.h>
#include<math.h>

main(){

    int anos, meses, dias, diasTotal;

    printf("\nDigite sua idade: ");
    printf("\nAnos: ");
    scanf("%d", &anos);

    printf("\nMeses: ");
    scanf("%d", &meses);
    
    printf("\nDias: ");
    scanf("%d", &dias);

    diasTotal = (anos * 365) + (meses * 30) + dias;

    printf("Sua idade em dias e: %d", diasTotal);



}
