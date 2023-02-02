#include <stdio.h>
#include <stdlib.h>

int lerum(int linha){
    printf("Quantas linhas suas matrizes possuem?\n");
    scanf("%d", &linha);
    while(linha<1){
        printf("Numero nao permitido.\n");
        printf("Quantas linhas suas matrizes possuem?\n");
        scanf("%d", &linha);
    }
    return linha;
}

int lerdois(int coluna){
    printf("Quantas colunas suas matrizes possuem?\n");
    scanf("%d", &coluna);
    while(coluna<1){
        printf("Numero nao permitido.\n");
        printf("Quantas colunas suas matrizes possuem?\n");
        scanf("%d", &coluna);
    }
}
int main(){
    int linhas = lerum(linhas);
    int colunas = lerdois(colunas);
    int matrizum [linhas] [colunas];
    int matrizdois [linhas] [colunas];
    int matrizsoma [linhas] [colunas];
    int i, j;
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("Digite o numero da posicao M %d %d:\n", i+1, j+1);
            scanf("%d", &matrizum[i] [j]);
        }
    }
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("Digite o numero da posicao M %d %d:\n", i+1, j+1);
            scanf("%d", &matrizdois[i] [j]);
        }
    }
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            matrizsoma [i] [j] = matrizum [i] [j] + matrizdois [i] [j];
        }
    }
    printf("Resultado da soma:\n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%d ", matrizsoma [i] [j]);
        }
        printf("\n");
    }
}