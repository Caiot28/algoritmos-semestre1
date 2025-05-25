#include<stdio.h>
#include<math.h>

main(){

    int idade, tempoTrabalho;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu tempo de trabalho: ");
    scanf("%d", &tempoTrabalho);

    if (idade >= 65 || tempoTrabalho >= 30 || idade >= 60 && tempoTrabalho >= 25) {

        printf("Voce pode se aposentar!");

    } else {

        printf("Ainda nao pode se aposentar");
        
    }



}