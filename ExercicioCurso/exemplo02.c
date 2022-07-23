// Exemplo de uso do for
#include <stdio.h>

int main(){
    int i, numero;

    printf("Digite o número máximo de iteraões:");
    scanf("%d", &numero);

    for(i = numero; i>=0; i--){
        printf("Iteração: %d\n", i);
    }
    printf("Encerrou");

    return 0;
}