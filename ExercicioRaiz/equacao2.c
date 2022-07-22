#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a != 0){
        delta = (b*b) - 4 * a * c;
        if(delta == 0){
            x1 = (-b + sqrt(delta)) / (2 * a);
            printf("O valor de delta e igual a 0\n");
            printf("x1 = x2 = %f", x1);
        } else{
            if (delta > 0 ){
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf("O valor do delta e maior que 0\n");
                printf("x1 = %f\n", x1);
                printf("x2 = %f\n", x2);                
            } else{
                printf("O valor do delta e menor que 0 \n");
                printf("Portanto nao existe raiz real!");
            }
        }
    } else{
        printf("Equacao de segundo grau invalida\n");
    }

    return 0;
}