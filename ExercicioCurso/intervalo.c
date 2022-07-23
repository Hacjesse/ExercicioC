#include <stdio.h>

int main(){
    int ls, li, i;

    printf("Digite o limite inferior:");
    scanf("%d", &li);
    printf("Digite o limite superior:");
    scanf("%d", &ls);

    for(i = li; i<=ls; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
        
    }
    return 0;
}