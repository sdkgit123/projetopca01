#include <stdio.h>
#include <stdlib.h>

int ler(int num){
    printf("Digite um numero:\n");
    scanf("%d", &num);
    while(num > 100){
        printf("Numero nao permitido, o numero deve estar entre 0 e 100.\n");
        printf("Digite um numero:\n");
        scanf("%d", &num);
    }
    return num;
}

int vetou(int num){
    printf("Quantos numeros voce quer inscrever?\n");
    scanf("%d", &num);
    while(num<0 || num>100){
        printf("Numero nao permitido.\n");
        printf("Quantos numeros voce quer inscrever?\n");
        scanf("%d", &num);
    }
    return num;
}

int main(){
    int numerosfo = vetou(numerosfo);
    int numeros[numerosfo];
    int i;
    int j=0;
    int k;
    int soma;
    for (i=0; i<numerosfo; i++){
        numeros[i] = ler(numeros[i]);
    }
    int numerosc[i];
    int l = i;
    while(j<l){
        numerosc[j]=numeros[i-1];
        j++;
        i--;
    }
    printf("Os numeros que voce digitou em ordem invertida:\n");
    for(k=0; k<l; k++){
    printf("%d ", numerosc[k]);
    }
}
