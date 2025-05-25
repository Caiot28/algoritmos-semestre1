#include<stdio.h>
#include<string.h>
#include<time.h>
#define TAM 1000

typedef struct{
    char nome[50];
    char email[30];
    char sexo[15];
    int id;
    char vacina[4];
    char endereco[50];
    double altura;

}Pessoa;

void cadastrar(Pessoa p[], int indice){

    char *arroba;
    int sexoValido = 0;
    int vacina = 2;
    

    srand(time(NULL)); 
    p->id = rand() % 200;

    printf("\nDigite o nome completo: ");
    fgets(p[indice].nome, sizeof(p[indice].nome), stdin);
    fflush(stdin);

    do{
    
    printf("\nDigite o email: ");
    fgets(p[indice].email, sizeof(p[indice].email), stdin);

    arroba = strchr(p[indice].email, '@');

    if(arroba == NULL){
        printf("\nEmail invalido");
    }
    fflush(stdin);
    } while(arroba == NULL);

    do{
    
    printf("\nDigite o sexo: ");
    scanf("%s", p[indice].sexo);

    if(strcmp(p[indice].sexo, "Feminino") == 0 || strcmp(p[indice].sexo, "Masculino") == 0 || strcmp(p[indice].sexo, "Indiferente") == 0){
        sexoValido = 1;
    } else {
        printf("\nSexo invalido, tente novamente");
    }
    fflush(stdin);
    } while(sexoValido == 0);

    printf("\nDigite o endereco: ");
    fgets(p[indice].endereco, sizeof(p[indice].endereco), stdin);
    fflush(stdin);

    do {
    printf("\nDigite a altura (entre 1 e 2): ");
    scanf("%lf", &p[indice].altura);
    fflush(stdin);

        if(p[indice].altura <= 1 || p[indice].altura >= 2){
        printf("\nInvalido. Apenas altura entre 1 e 2 metros.");
    }
    } while (p[indice].altura <= 1 || p[indice].altura >= 2 );

    do {
    printf("\nDigite 1 se e vacinado e 0 para nao vacinado: ");
    scanf("%d", &vacina);
    fflush(stdin);

    if(vacina == 1){
        strcpy(p[indice].vacina, "Sim");
    } else if(vacina == 0){
        strcpy(p[indice].vacina, "Nao");
    } else {
        printf("\nValor invalido, tente novamente");
    }
    }while (vacina != 1 && vacina != 0);
}

void mostrar(Pessoa p[], int totalCadastrados){
    for(int i = 0; i < totalCadastrados; i++){
        printf("\nId: %d", p[i].id);
        printf("\nNome: %s", p[i].nome);
        printf("Email: %s", p[i].email);
        printf("Sexo: %s", p[i].sexo);
        printf("\nEndereco: %s", p[i].endereco);
        printf("Altura: %.2lf", p[i].altura);
        printf("\nVacinado: %s", p[i].vacina);
        printf("\n");
    }
}

void buscar(Pessoa p[], int totalCadastros, int id){
    if(totalCadastros == 0){
        printf("\nLista vazia");
        return;
    } else {
        for(int i = 0; i < totalCadastros; i++){
            if(p[i].id == id){
            printf("\nId: %d", p[i].id);
            printf("\nNome: %s", p[i].nome);
            printf("Email: %s", p[i].email);
            printf("Sexo: %s", p[i].sexo);
            printf("\nEndereco: %s", p[i].endereco);
            printf("Altura: %.2lf", p[i].altura);
            printf("\nVacinado: %s", p[i].vacina);
            printf("\n");
                return;
            }
        }
    }
    printf("\nID nao encontrado");
    printf("\n");
}

void alterar(Pessoa p[], int totalCadastros, int id){

    int escolha;
    int sexoValido = 0;
    char *arroba;
    int vacina = 2;

    if(totalCadastros == 0){
        printf("\nLista vazia");
        return;
    } else {
        for(int i = 0; i < totalCadastros; i++){
            if(p[i].id == id){
                printf("\n1 - Alterar nome");
                printf("\n2 - Alterar email");
                printf("\n3 - Alterar sexo");
                printf("\n4 - Alterar endereco");
                printf("\n5 - Alterar altura");
                printf("\n6 - Alterar vacina: ");

                scanf("%d", &escolha);
                fflush(stdin);

                switch(escolha){
                    case 1:
                    printf("\nAlterar nome: ");
                    fgets(p[i].nome, sizeof(p[i].nome), stdin);
                    break;

                    case 2:
                    do{
                        printf("\nAlterar email: ");
                        fgets(p[i].email, sizeof(p[i].email), stdin);

                        arroba = strchr(p[i].email, '@');

                        if(arroba == NULL){
                            printf("\nEmail invalido");
                        }
                        fflush(stdin);
                    } while(arroba == NULL);
                    break;

                    case 3:
                    do{
                        printf("\nAlterar sexo: ");
                        scanf("%s", p[i].sexo);

                        if(strcmp(p[i].sexo, "Feminino") == 0 || strcmp(p[i].sexo, "Masculino") == 0 || strcmp(p[i].sexo, "Indiferente") == 0){
                        sexoValido = 1;
                        } else {
                        printf("\nSexo invalido, tente novamente");
                        }
                        fflush(stdin);
                        } while(sexoValido == 0);
                    break;

                    case 4:
                    printf("\nAlterar o endereco: ");
                    fgets(p[i].endereco, sizeof(p[i].endereco), stdin);
                    fflush(stdin);
                    break;

                    case 5:
                    do {
                        printf("\nDigite a altura (entre 1 e 2): ");
                        scanf("%lf", &p[i].altura);
                        fflush(stdin);

                            if(p[i].altura <= 1 || p[i].altura >= 2){
                            printf("\nInvalido. Apenas altura entre 1 e 2 metros.");
                        }
                        } while (p[i].altura <= 1 || p[i].altura >= 2 );
                    break;

                    case 6:
                    do {
                        printf("\nDigite 1 se e vacinado e 0 para nao vacinado: ");
                        scanf("%d", &vacina);
                        fflush(stdin);

                        if(vacina == 1){
                            strcpy(p[i].vacina, "Sim");
                        } else if(vacina == 0){
                            strcpy(p[i].vacina, "Nao");
                        } else {
                            printf("\nValor invalido, tente novamente");
                        }
                        }while (vacina != 1 && vacina != 0);
                    break;

                    default:
                    printf("\nOpcao invalida");

                }
                return;
            }
        }
    }
    printf("\nID nao encontrado");
    printf("\n");
}

void excluir(Pessoa p[], int totalCadastros, int id){
    if(totalCadastros == 0){
        printf("\nLista vazia");
        return;
    } else {
        for(int i = 0; i < totalCadastros; i++){
            if(p[i].id == id){
                for(int j = i; j < totalCadastros - 1; j++){
                    p[j] = p[j+1];
            
                }
                printf("\nExcluido com sucesso");
                printf("\n");
                return;
            }
        }
    }
    printf("\nID nao encontrado");
    printf("\n");
}

main(){

    Pessoa p[TAM];
    int totalCadastros = 0, idBusca;
    char opcao;

    do{

    printf("\nDigite A para cadastrar");
    printf("\nDigite B para mostrar");
    printf("\nDigite C para buscar um registro");
    printf("\nDigite D para alterar um registro");
    printf("\nDigite E para excluir");
    printf("\nDigite F para sair: ");
    scanf("%s", &opcao);
    fflush(stdin);
    switch (opcao)
    {

    case 'F':
        printf("\nFinalizado.");
        break;

    case 'A':
    if(totalCadastros < TAM){
        cadastrar(p, totalCadastros);
        totalCadastros++;
    } else {
        printf("\nTotal de cadastros atingiu o limite maximo.");
    }
        break;
    case 'B':
        if(totalCadastros == 0){
            printf("\nNao ha registros");
        } else {
            mostrar(p, totalCadastros);
        }
        break;
    case 'C':
        printf("\nDigite o ID para busca: ");
        scanf("%d", &idBusca);
        buscar(p, totalCadastros, idBusca);
        break;
    case 'D':
        printf("\nDigite o ID para alteracao: ");
        scanf("%d", &idBusca);
        alterar(p, totalCadastros, idBusca);
        break;
    case 'E':
        printf("\nDigite o ID para excluir: ");
        scanf("%d", &idBusca);
        excluir(p, totalCadastros, idBusca);
        totalCadastros--;
        break;
    default:
    printf("\nOpcao invalida");

    }

    }while(opcao != 'F');

}

