#include<stdio.h>
#include<math.h>

main(){
    
    float salarioVelho, percReajuste, salarioNovo;

    printf("\nDigite seu salario: ");
    scanf("%f", &salarioVelho);

    printf("\nDigite o percentual de reajuste: ");
    scanf("%f", &percReajuste);

    salarioNovo = salarioVelho + (salarioVelho * (percReajuste / 100));

    printf("\nO salario novo e de %.2f reais", salarioNovo);




    
}
