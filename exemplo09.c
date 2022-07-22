#include <stdio.h>

int main(int argc, char **argv){
    int i, numero;

    printf("Infome um número: ");
    scanf("%d", &numero);
    i = 1;
    while(i<=numero){
        printf("1/%d ", i);
        i++;
        if(i<= numero ){
            printf("+ ");
        };

    }
    return 0;
}