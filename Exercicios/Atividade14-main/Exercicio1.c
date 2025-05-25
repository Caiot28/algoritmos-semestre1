#include<stdio.h>

main(){

    int num1 = 10, *pont1;
    float num2 = 2.5, *pont2;
    char strg[2] = "A", *pont3;

    printf("Antes da mudanca: %d %.2f %s", num1, num2, strg);

    pont1 = &num1;
    *pont1 = 20;

    pont2 = &num2;
    *pont2 = 34.7;

    pont3 = &strg;
    *pont3 = 'B';

    printf("\nDepois da mudanca: %d %.2f %s", num1, num2, strg);


}