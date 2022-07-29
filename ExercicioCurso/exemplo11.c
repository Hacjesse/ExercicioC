#include<stdio.h>
#ifndef TAMANHO
    #define TAMANHO  5
#endif

int main(int argc, char **argv){
    int minhaMatriz[5][5], linha, coluna, i, j;

    printf("Digite a quantidade de linha da matriz: ");
    scanf("%d", &linha);
    printf("Digite a quantidade de coluna da matriz: ");
    scanf(" %d", &coluna);
    printf("Digite os elementos da matriz: ");

    for(i = 0; i<linha; i++)
        for (j=0; j<coluna; j++){
            scanf("%d", &minhaMatriz[i][j]);
        }


    for(i = 0; i<linha; i++)
        for (j=0; j<coluna; j++){
            printf ("[%d]", minhaMatriz[i][j]);

        }


    return 0;
}

