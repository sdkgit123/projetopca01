#include<stdio.h>
#include<stdlib.h>
int numerosfo;
int otonumerosfo;

int arreis(int array[numerosfo], int arrays[otonumerosfo]){
    int i;
    int soma[numerosfo];
    if(numerosfo != otonumerosfo){
        printf("Nao e possivel somar os vetores.");
        return 0;
    } else{
        for(i=0; i<numerosfo; i++){
            *(soma+i) = *(array+i) + *(arrays+i);
        }
        for(i=0; i<numerosfo; i++){
            printf("%d ", *(soma+i));
        }
    }
    return 1;
}

int main(){
    int i;
    printf("Qual sera o tamanho do primeiro vetor?:\n");
    scanf("%d", &numerosfo);
    printf("Qual sera o tamanho do segundo vetor?:\n");
    scanf("%d", &otonumerosfo);
    int array[numerosfo];
    int arrays[otonumerosfo];
    int soma[numerosfo];
    for(i=0; i<numerosfo; i++){
        printf("Digite um numero para o primeiro vetor:\n");
        scanf("%d", array+i);
    }
    for(i=0; i<otonumerosfo; i++){
        printf("Digite um numero para o segundo vetor:\n");
        scanf("%d", arrays+i);
    }
    soma[numerosfo] = arreis(&array, &arrays);
    return 0;
}