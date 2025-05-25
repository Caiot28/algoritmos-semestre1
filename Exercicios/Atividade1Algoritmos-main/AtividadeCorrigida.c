#include <stdio.h>

main () {

    char Nome [30];
    int Idade;
    char Matricula[12];
    char Endereco[50];
    char Curso[25];
    int Periodo;
    char Disciplinas[50];
    float Mensalidade;

    printf("_______________________");
    printf("Cadastro de aluno");
    printf("_______________________");

    printf("\nDigite seu nome: "); 
    fgets(Nome, 30, stdin);
    fflush(stdin);

    printf("\nDigite sua idade: ");
    scanf("%d", &Idade);
    fflush(stdin);

    printf("\nDigite sua matricula: ");
    fgets(Matricula, 12, stdin);
    fflush(stdin);

    printf("\nDigite seu endereco: ");
    fgets(Endereco, 50, stdin);
    fflush(stdin);

    printf("\nDigite seu curso: ");
    fgets(Curso, 25, stdin);
    fflush(stdin);

    printf("\nDigite o periodo: ");
    scanf("%d", &Periodo);
    fflush(stdin);

    printf("\nDigite as disciplinas: ");
    fgets(Disciplinas, 50, stdin);
    fflush(stdin);

    printf("\nDigite a mensalidade: ");
    scanf("%f", &Mensalidade);

    printf("______________________________________________\n");

    
    printf("\nSeu nome: %s", Nome);
    printf("\nSua idade: %d\n", Idade);
    printf("\nSua matricula: %s", Matricula);
    printf("\nSeu endereco: %s", Endereco);
    printf("\nSeu curso: %s", Curso);  
    printf("\nPeriodo: %d\n", Periodo);
    printf("\nDisciplina: %s", Disciplinas);
    printf("\nMensalidade: %.2f", Mensalidade);

    printf("\n______________________________________________\n");

}
