#include <stdio.h>

int main(int argc, char **argv){
    int i, numero;

    printf("Informe um número: ");
    scanf("%d", &numero);
    i = 0;
    while(i<numero){
        printf("Iteração %d\n", i);
        i++;
    }
    return 0;
}