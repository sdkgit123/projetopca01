#include<stdio.h>
#include<stdlib.h>

#define MAX 500

void elementos(int *veto, int *min, int *max, int nfo){
    int i;
    for(i=0; i<nfo; i++){
        if(i==0){
            *min = *(veto+i);
            *max = *(veto+i);
        }
        if(*(veto+i) > *max){
            *max = *(veto+i);
        } else if(*(veto+i) < *min){
            *min = *(veto+i);
        }
    }
    printf("maximo: %d, minimo: %d", *max, *min);
}

int main(){
    int maximo, minimo, numerosfo, i;
    int array[MAX];
    printf("Qual o numero de elementos do vetor?\n", MAX);
    scanf("%d", &numerosfo);
    while(numerosfo > MAX){
        printf("Numero de elementos excede o limite.\n");
        printf("Qual o numero de elementos do vetor?\n", MAX);
        scanf("%d", &numerosfo);
    }
    for(i=0; i<numerosfo; i++){
        printf("Digite um numero:\n");
        scanf("%d", array+i);
    }
    elementos(array, &minimo, &maximo, numerosfo);
    return 0;
}
