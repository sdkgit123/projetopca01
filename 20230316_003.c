#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    float **matriz;
    float **otamatriz;
    float **matrizsoma;
    int linhas, colunas;
    printf("Quantas linhas voce quer que a matriz tenha?:\n");
    scanf("%d", &linhas);
    while(linhas<=0){
        printf("Numero nao permitido.\n");
        printf("Quantas linhas voce quer que a matriz tenha?:\n");
        scanf("%d", &linhas);
    }
    printf("Quantas colunas voce quer que a matriz tenha?:\n");
    scanf("%d", &colunas);
    while(colunas<=0){
        printf("Numero nao permtido.\n");
        printf("Quantas colunas voce quer que a matriz tenha?:\n");
        scanf("%d", &colunas);
    }

    matriz = (float**) malloc(linhas * sizeof(float*));
    for(i=0; i<linhas; i++){
        *(matriz+i) = (float*)malloc(colunas*sizeof(float));
    }
    otamatriz = (float**) malloc(linhas * sizeof(float*));
    for(i=0; i<linhas; i++){
        *(otamatriz+i) = (float*)malloc(colunas*sizeof(float));
    }
    matrizsoma = (float**) malloc(linhas * sizeof(float*));
    for(i = 0; i < linhas; i++){
        *(matrizsoma + i) = (float*) malloc(colunas * sizeof(float));
    }

  for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("Digite um numero na posicao %d, %d da matriz 1:\n", i+1, j+1);
            scanf("%f", &(*(matriz+i))[j]);
        }
    }

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("Digite um numero na posicao %d, %d da matriz 2:\n", i+1, j+1);
            scanf("%f", &(*(otamatriz+i))[j]);
        }
    }

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            *(*(matrizsoma+i)+j) = *(*(matriz+i)+j) + *(*(otamatriz+i)+j);
        }
    }

    for(i=0; i<linhas; i++){
        printf("\n");
        float* linha = *(matrizsoma+i);
        for(j=0; j<colunas; j++){
            printf("%1.2f ", *(linha + j));
        }
    }
    return 0;
}