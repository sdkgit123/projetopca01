#include<stdio.h>

int main(){
    int matriz [5] [5];
    int digprin [5];
    int digsec[5];
    int linhaqua[5];
    int coldois [5];
    int i, j;
    int k=0;
    int l=4;
    int m=0;
    int n=0;
    for(i=0;i<5;i++){
        for(j=0; j<5; j++){
            printf("Digite o numero da posicao M %d %d", i+1, j+1);
            scanf("%d", &matriz [i] [j]);
        }
    }
    while(k<5){
        digprin [k] = matriz [k] [k];
        digsec [k] = matriz [l] [k];
        k++;
        l--;
    }
    for(i=0;i<5;i++){
        linhaqua [i] = matriz [3] [i];
        coldois [i] = matriz [i] [1];
    }
printf("Matriz Digitada:\n");
    for(i=0;i<5;i++){
        printf("\n");
        for(j=0; j<5; j++){
            printf("%d ", matriz [i] [j]);
        }
    }
    printf("\nDiagonal Principal:\n");
    for(i=0; i<5; i++){
        printf("%d ", digprin [i]);
        }
    printf("\nDiagonal Secundaria:\n");
    for(i=0; i<5; i++){
        printf("%d ", digsec [i]);
    }
    printf("\nColuna Dois\n");
    for(i=0;i<5;i++){
        printf("%d ", coldois [i]);
    }
    printf("\nLinha Quatro\n");
    for(i=0;i<5;i++){
        printf("%d ", linhaqua [i]);
    }
    printf("\nToda a matriz, menos a diagonal principal:\n");
    for(i=0;i<5;i++){
        printf("\n");
        for(j=0; j<5; j++){
            if(i != j){
                printf("%d ", matriz[i] [j]);
            }
        }
    }
    return 0;
}