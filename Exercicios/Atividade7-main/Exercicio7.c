#include<stdio.h>

main(){

    char sexo, olhos, cabelos;
    int opcao, totalHabitantes = 0, totalEspecifico = 0, totalM = 0, totalF = 0, idade;
    float salario, porcentagem;

    do{ // cadastrar 1 hab em cada rep

        do { // validacao sexo
            printf("\nDigite o sexo (m ou f): ");
            scanf("%c", &sexo);
            fflush(stdin);

            if(sexo != 'm' && sexo !='f'){
                printf("\nOpcao invalida. Digite novamente");
            }

            if(sexo == 'm'){ // contador sexo
                totalM++;
            } else if (sexo == 'f'){
                totalF++;
            }

        }while (sexo != 'm' && sexo !='f');

        do{ // validacao olhos
            printf("\nDigite a cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos): ");
            scanf("%c", &olhos);
            fflush(stdin);

            if(olhos != 'a' && olhos != 'v' && olhos != 'p' && olhos != 'c'){
                printf("\nOpcao invalida. Digite novamente");
            }

        }while (olhos != 'a' && olhos != 'v' && olhos != 'p' && olhos != 'c');

        do{ // validacao cabelos
            printf("\nDigite a cor do cabelo (l (loiros), c (castanhos), p (pretos), r (ruivos): ");
            scanf("%c", &cabelos);
            fflush(stdin);

            if(cabelos != 'l' && cabelos != 'r' && cabelos != 'p' && cabelos != 'c'){
                printf("\nOpcao invalida. Digite novamente");
            }

        }while(cabelos != 'l' && cabelos != 'p' && cabelos != 'c' && cabelos != 'r');

        do{ // validacao salario
            printf("\nDigite o salario: ");
            scanf("%f", &salario);
            fflush(stdin);

            if(salario < 0){
            printf("\nOpcao invalida. Digite novamente");
            }

        }while (salario < 0);

        do { // validacao idade
            printf("\nDigite a idade: ");
            scanf("%d", &idade);
            fflush(stdin);

            if(idade < 10 || idade > 100){
            printf("\nOpcao invalida. Digite novamente");
            }
        }while (idade < 10 || idade > 100);

        // contador especifico
        if(sexo == 'f' && olhos == 'c' && cabelos == 'c' && idade > 18 && idade < 35){
        totalEspecifico++;
        }

        totalHabitantes++; // contagem habitantes

        printf("\nDeseja cadastrar um novo habitante? 1 - sim || -1 nao: ");
        scanf("%d", &opcao);
        fflush(stdin);

    } while (opcao != -1);

    porcentagem = (float)totalEspecifico/totalHabitantes * 100;

    printf("\nTotal de habitantes cadastrados: %d", totalHabitantes);
    
    printf("\nPorcentagem de pessoas com caracteristicas especificas: %.2f", porcentagem);

    printf("\nNumero de mulheres: %d", totalF);
    printf("\nNumero de homens: %d", totalM);

}