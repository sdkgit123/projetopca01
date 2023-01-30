#include <stdio.h>
#include <stdlib.h>

int ler(int num){
    printf("Digite um numero:\n");
    scanf("%d", &num);
    while(num > 100){
        printf("Numero nao permitido, o numero deve ser menor que 100.\n");
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
    int k=0;
    int soma=0;
    int l;
    for(i=0; i<numerosfo; i++){
        numeros[i]=ler(numeros[i]);
        if(numeros[i]%2==0){
            soma++;
        }
    }
    int numerospa[soma];
    while(j<=soma-1){
        if(numeros[k]%2==0){
            numerospa[j]=numeros[k];
            j=j+1;
        }
        k++;
    }
    printf("Os numeros pares digitados sao:\n");
    for(l=0;l<=soma-1; l++){
        printf("%d ", numerospa[l]);
    }
    if(soma == 0){
    printf("Voce nao digitou numeros pares.");
    }
return 0;
}
