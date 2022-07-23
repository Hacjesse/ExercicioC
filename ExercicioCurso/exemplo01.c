/*Exemplo de uso do switch case*/
#include <stdio.h>
int main(){
    int numero;

    printf("Meu menu\n");
    printf("0->Pizza\n");
    printf("1->Feijoada\n");
    printf("2->Churrasco\n");

    printf("Escolha uma opção: ");
    scanf("%d", &numero);

    switch(numero){
    case 0:
        printf("Sai uma pizza\n");
        break;
    case 1:
        printf("Sai uma feijoada\n");
        break;
    case 2:
        printf("Sai um churrasco\n");
        break;
    default:
        printf("Não sei qual opção você escolheu\n");
    }

    return 0;
}