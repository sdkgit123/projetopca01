#include <stdio.h>
#include <stdlib.h>

int ler(int num){
    printf("Digite um numero:\n");
    scanf("%d", &num);
    while(num>100 || num<0){
        printf("Numero nao permitido, o numero deve estar entre 0 e 100.\n");
        printf("Digite um numero:\n");
        scanf("%d", &num);
    }
    while(num>15 && num<100){
        printf("Tem certeza disso? Acho melhor nao digitar um numero tao grande hein...\n");
        printf("Digite um numero:\n");
        scanf("%d", &num);
    }
    return num;
}

int vetou(int num){
    printf("Quantos numeros voce quer inscrever?\n");
    scanf("%d", &num);
    while (num>100 || num<0){
        printf("Numero nao permitido, o numero deve estar entre 0 e 100");
        printf("Quantos numeros voce quer inscrever?\n");
        scanf("%d", &num);
    }
    return num;
}

int fatorial(int num){
    int multi = 1;
    int i = 2;
    while(i<=num){
        multi = multi * i;
        i++;
    }
    return multi;
}

int main(){
    int numerosfo = vetou(numerosfo);
    int numeros[numerosfo];
    int i;
    int j;
    int numerosfat[numerosfo];
    for(i=0; i<numerosfo; i++){
        numeros[i] = ler(numeros[i]);
        numerosfat[i] = fatorial(numeros[i]);
    }
    printf("Os fatoriais dos numeros que voce digitou:\n");
    for(j=0; j<numerosfo; j++){
        printf("%d ", numerosfat[j]);
    }
}