#include <stdio.h>

main () {

    char Nome [30];
    int Idade;
    char Matricula[12];
    char Endereco[50];
    char Curso[25];
    char Periodo[12];
    char Disciplina[15];
    float Mensalidade;
    
    printf("Digite seu nome: \n"); 
    fgets(Nome, 30, stdin);
    fflush(stdin);

    printf("Digite sua idade: \n");
    scanf("%d", &Idade);
    fflush(stdin);

    printf("Digite sua matricula: \n");
    fgets(Matricula, 12, stdin);
    fflush(stdin);

    printf("Digite seu endereco: \n");
    fgets(Endereco, 50, stdin);
    fflush(stdin);

    printf("Digite seu curso: \n");
    fgets(Curso, 25, stdin);
    fflush(stdin);

    printf("Digite o periodo: \n");
    fgets(Periodo, 12, stdin);
    fflush(stdin);

    printf("Digite a disciplina: \n");
    fgets(Disciplina, 15, stdin);
    fflush(stdin);
    
    printf("Digite a mensalidade: \n");
    scanf("%f", &Mensalidade);
    
    printf("\nSeu nome: %s", Nome);
    printf("\nSua idade: %d\n", Idade);
    printf("\nSua matricula: %s", Matricula);
    printf("\nSeu endereco: %s", Endereco);
    printf("\nSeu curso: %s", Curso);
    printf("\nPeriodo: %s", Periodo);
    printf("\nDisciplina: %s", Disciplina);
    printf("\nMensalidade: %f", Mensalidade);

}
