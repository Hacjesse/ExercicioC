#include <stdio.h>

int main(int argc, char **argv){
    int i, numero;

    printf("Informe um número: ");
    scanf("%d", &numero);
    i = 0;
    do{
        printf("Iteração %d\n", i);
        i++;
    }while(i<numero);
    return 0;
}