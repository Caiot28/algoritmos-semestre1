#include<stdio.h>

int comparar(int n1, int n2);

main(){

    int n1, n2;

    printf("Digite o n1: ");
    scanf("%d", &n1);

    printf("Digite o n2: ");
    scanf("%d", &n2);
    
    int resultado = comparar(n1, n2);

    printf("%d", resultado);

}

int comparar(int n1, int n2){
    if(n1 > n2){
        return n1;
    } else {
        return n2;
    }
}
