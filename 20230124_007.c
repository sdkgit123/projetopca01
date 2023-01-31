#include <stdio.h>
#include <stdlib.h>

int ler(int num){
    printf("Em qual face caiu?\n");
    scanf("%d", &num);
    while(num<1 || num>6){
        printf("O dado possui 6 faces.\n");
        printf("Em qual face caiu?");
        scanf("%d", &num);
    }
    return num;
}

int vetou(int num){
    printf("Quantas vezes voce quer lancar o dado?\n");
    scanf("%d", &num);
    while(num<0){
        printf("Numero nao permitido. O numero deve ser positivo.\n");
        printf("Quantas vezes voce quer lancar o dado?");
        scanf("%d", &num);
    }
    return num;
}

int main(){
    int numerosfo = vetou(numerosfo);
    int numeros[numerosfo];
    int faces[] = {1,2,3,4,5,6};
    int vezes[] = {0,0,0,0,0,0};
    int i;
    int j;
    int k;
    int l;
    for(l=0; l<numerosfo; l++){
        numeros[l] = ler(numeros[l]);
    }
    for(i=0; i<numerosfo; i++){
        for(j=0; j<6; j++){
            if(numeros[i] == faces[j]){
                vezes[j]++;
            }
        }
    }
    for(k=0;k<6;k++){
        printf("O numero %d aparece %d vezes.\n", faces[k], vezes[k]);
    }
    return 0;
}