#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int mata;
int matb;
int matc;
int matd;
int matriz [MAX] [MAX];
int matri [MAX] [MAX];
int multi [MAX] [MAX];

int multiplicar(int linhasum, int linhasdois, int colunasum, int colunasdois){
    int i, j, k;
    if(linhasdois != colunasum){
        return 0;
    }else{
    for(i=0; i<linhasum; i++){
        for (j = 0; j < colunasdois; j++)
        {
            multi[i] [j] = 0;
        }
        
    }
    for(i=0; i<linhasum; i++){
        for(j=0; j<colunasdois; j++){
            for(k = 0; k<colunasum; k++){
                multi[i] [j] += matriz[i] [k] * matri [k] [j];
            }
        }
    }

    return 1;
    }
}

int main(){
    int tamanho [4];
    int i, j;
    int aux;
    for(i=0; i<2; i++){
        printf("Digite as linhas das matrizes 1 e 2:\n");
        scanf("%d", &tamanho[i]);
    }
    for(i=2; i<4; i++){
        printf("Digite as colunas das matrizes 1 e 2:\n");
        scanf("%d", &tamanho[i]);
    }
     mata = tamanho[0];
     matb = tamanho [1];
     matc = tamanho [2];
     matd = tamanho [3];

    for(i=0; i<tamanho[0]; i++){
        for(j=0; j<tamanho[2]; j++){
            printf("Digite um numero para a M1 %d %d:\n", i+1, j+1);
            scanf("%d", &matriz [i] [j]);
        }
    }
    for(i=0; i < tamanho[1]; i++){
        for(j=0; j< tamanho[3]; j++){
            printf("Digite um numero para a M2 %d %d:\n", i+1, j+1);
            scanf("%d", &matri [i] [j]);
        }
    }
    
 aux = multiplicar(mata, matb, matc, matd);
    if(aux == 0){
        printf("Nao e possivel multiplicar as matrizes.\n");
    }else if(aux == 1){
            printf("\n");
    for(i=0; i<mata; i++){
    printf("|\t");
    for(j=0; j<matd; j++){
        printf("%d\t", multi [i][j]);
    }
    printf("|");
    printf("\n");
 }
    }
}