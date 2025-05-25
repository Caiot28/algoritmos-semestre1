#include <stdio.h>

main() {
    int elevadorA_matutino = 0, elevadorA_vespertino = 0, elevadorA_noturno = 0, totalA;
    int elevadorB_matutino = 0, elevadorB_vespertino = 0, elevadorB_noturno = 0, totalB;
    int elevadorC_matutino = 0, elevadorC_vespertino = 0, elevadorC_noturno = 0 ,totalC;
    int totalMatutino = 0, totalVespertino = 0, totalNoturno = 0, totalServicos = 0;
    float mediaUtilizacao;

    char elevador, periodo;

    for (int i = 0; i < 5; ++i) {

        printf("\nDigite o elevador que mais usa (A, B ou C): ");
        scanf("%c", &elevador);
        fflush(stdin);

        printf("Digite o periodo em que mais usa (M, V ou N): ");
        scanf("%c", &periodo);
        fflush(stdin);

        switch (elevador) {
            case 'A':
                if (periodo == 'M') elevadorA_matutino++;
                else if (periodo == 'V') elevadorA_vespertino++;
                else if (periodo == 'N') elevadorA_noturno++;
                break;
            case 'B':
                if (periodo == 'M') elevadorB_matutino++;
                else if (periodo == 'V') elevadorB_vespertino++;
                else if (periodo == 'N') elevadorB_noturno++;
                break;
            case 'C':
                if (periodo == 'M') elevadorC_matutino++;
                else if (periodo == 'V') elevadorC_vespertino++;
                else if (periodo == 'N') elevadorC_noturno++;
                break;
            default:
                printf("\nElevador ou período inválido.");
        }
    }

    totalA = elevadorA_matutino + elevadorA_noturno + elevadorA_vespertino;
    totalB = elevadorB_matutino + elevadorB_noturno + elevadorB_vespertino;
    totalC = elevadorC_matutino + elevadorC_noturno + elevadorC_vespertino;
    totalServicos = totalA + totalB + totalC;

    totalMatutino = elevadorA_matutino + elevadorB_matutino + elevadorC_matutino;
    totalVespertino = elevadorA_vespertino + elevadorB_vespertino + elevadorC_vespertino;
    totalNoturno = elevadorA_noturno + elevadorB_noturno + elevadorC_noturno;
    totalServicos = totalMatutino + totalVespertino + totalNoturno;

    if(totalMatutino > totalVespertino && totalMatutino > totalNoturno){
        printf("\nPeriodo mais utilizado: matutino");

        if(elevadorA_matutino > elevadorB_matutino && elevadorA_matutino > elevadorC_matutino){
        printf("\nElevador mais utilizado nesse periodo: A");
        } else if(elevadorB_matutino > elevadorA_matutino && elevadorB_matutino > elevadorC_matutino){
        printf("\nElevador mais utilizado nesse periodo: B");
        } else {
        printf("\nElevador mais utilizado nesse periodo: C");
        }

    } else if(totalVespertino > totalMatutino && totalVespertino > totalNoturno){
        printf("\nPeriodo mais utilizado: vespertino");

        if(elevadorA_vespertino > elevadorB_vespertino && elevadorA_vespertino > elevadorC_vespertino){
        printf("\nElevador mais utilizado nesse periodo: A");
        } else if(elevadorB_vespertino > elevadorA_vespertino && elevadorB_vespertino > elevadorC_vespertino){
        printf("\nElevador mais utilizado nesse periodo: B");
        } else {
        printf("\nElevador mais utilizado nesse periodo: C");
        }
    } else {
        printf("\nPeriodo mais utilizado: noturno");

        if(elevadorA_noturno > elevadorB_noturno && elevadorA_noturno > elevadorC_noturno){
        printf("\nElevador mais utilizado nesse periodo: A");
        } else if(elevadorB_noturno > elevadorA_noturno && elevadorB_noturno > elevadorC_noturno){
        printf("\nElevador mais utilizado nesse periodo: B");
        } else {
        printf("\nElevador mais utilizado nesse periodo: C");
        }

    }

    if(totalA > totalB && totalA > totalC){
        if(totalB > totalC){
                mediaUtilizacao = (float)totalB / totalServicos;
            } else {
                mediaUtilizacao = (float)totalC / totalServicos;
            }
        printf("\nElevador mais utilizado: A");

        if(elevadorA_matutino > elevadorA_vespertino && elevadorA_matutino > elevadorA_noturno){
        printf("\nPeriodo mais utilizado: matutino");
        } else if(elevadorA_vespertino > elevadorA_matutino && elevadorA_vespertino > elevadorA_noturno){
        printf("\nPeriodo mais utilizado: vespertino");
        } else {
        printf("\nPeriodo mais utilizado: nnoturno");
        }

        } else if(totalB > totalA && totalB > totalC){
            if(totalA > totalC){
                mediaUtilizacao = (float)totalA / totalServicos;
            } else {
                mediaUtilizacao = (float)totalC / totalServicos;
            }
        printf("\nElevador mais utilizado: B");

        if(elevadorB_matutino > elevadorB_vespertino && elevadorB_matutino > elevadorB_noturno){
        printf("\nPeriodo mais utilizado: matutino");
        } else if(elevadorB_vespertino > elevadorB_matutino && elevadorB_vespertino > elevadorB_noturno){
        printf("\nPeriodo mais utilizado: vespertino");
        } else {
        printf("\nPeriodo mais utilizado: nnoturno");
        }

        } else {
            if(totalA > totalB){
                mediaUtilizacao = (float)totalA / totalServicos;
            } else {
                mediaUtilizacao = (float)totalB / totalServicos;
            }
        printf("\nElevador mais utilizado: C");

        if(elevadorC_matutino > elevadorC_vespertino && elevadorC_matutino > elevadorC_noturno){
        printf("\nPeriodo mais utilizado: matutino");
        } else if(elevadorC_vespertino > elevadorC_matutino && elevadorC_vespertino > elevadorC_noturno){
        printf("\nPeriodo mais utilizado: vespertino");
        } else {
        printf("\nPeriodo mais utilizado: nnoturno");
        }
        }

        mediaUtilizacao = mediaUtilizacao * 100;

        printf("\nPercentagem sobre o total de servicos prestados do elevador de media utilizacao: %f", mediaUtilizacao);

}