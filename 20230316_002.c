#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int **matriz;
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

    matriz = (int **) malloc(linhas * sizeof(int *));
    for(i = 0; i < linhas; i++) {
        *(matriz + i) = (int *) malloc(colunas * sizeof(int));
    }

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            printf("Digite o numero na posicao %d / %d\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

printf("Por aritmetica de ponteiro:\n");
for(i=0; i<linhas; i++) {
    printf("\n");
    int* linha = *(matriz + i);
    for(j=0; j<colunas; j++) {
        printf("%d ", *(linha + j));
    }
}

printf("\n\nPor indice:\n");
for(i=0; i<linhas; i++) {
    printf("\n");
    for(j=0; j<colunas; j++) {
        printf("%d ", matriz[i][j]);
    }
}
free(matriz);
    return 0;
}
