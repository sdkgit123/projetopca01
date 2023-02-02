#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz [3] [3];
    int matrizmulti [3] [3];
    int vezes;
    int i, j;
    printf("Voce quer multiplicar a matriz por quanto?\n");
    scanf("%d", &vezes);
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite o elemento da matriz M %d %d:\n", i+1, j+1);
            scanf("%d", &matriz [i] [j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            matrizmulti [i] [j] = matriz [i] [j] * vezes;
        }
    }
    print("Sua matriz multiplicada por %d", vezes);
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", matrizmulti [i] [j]);
        }
        printf("\n");
    }
    return 0;
}