#include<stdio.h>
#include<stdlib.h>

int main(){
    int matrizum[3][5];
    int matrizdois[3][5];
    int matrizsoma[3][5];
    int i, j;

    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            printf("Digite um numero para a matriz um:\n");
            scanf("%d", (*(matrizum+i)+j));
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            printf("Digite um numero para a matriz dois:\n");
            scanf("%d", (*(matrizdois+i)+j));
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            *(*(matrizsoma+i)+j) = *(*(matrizum+i)+j)+*(*(matrizdois+i)+j);
        }}
       for(i=0; i<3; i++){
        printf("\n");
        for(j=0; j<5; j++){
            printf("%d ", *(*(matrizsoma+i)+j));
        }} 
        return 0;
}