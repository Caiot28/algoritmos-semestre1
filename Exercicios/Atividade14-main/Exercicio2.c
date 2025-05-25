#include<stdio.h>

main(){

    int num1, num2, *pont1, *pont2;

    pont1 = &num1;
    pont2 = &num2;

    if(pont1 > pont2){
        printf("\nMaior endereco num1: %d", pont1);
    } else {
        printf("\nMaior endereco num2: %d", pont2);
    }

}