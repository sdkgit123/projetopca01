#include <stdio.h>
#include <stdlib.h>

int ler(int num){
    printf("Digite as coordenadas:\n");
    scanf("%d", &num);
    return num;
}

int vetou(int num){
    printf("Quantas coordenadas tem os vetores?\n");
    scanf("%d", &num);
    while(num<2){
        printf("O vetor so existe a partir de duas coordenadas.\n");
        printf("Quantas coordenadas tem os vetores?\n");
        scanf("%d", &num);
    }
    return num;
}

int main(){
    int numerosfo = vetou(numerosfo);
    int vetouum[numerosfo];
    int vetoudois[numerosfo];
    int vetoumulti[numerosfo];
    int i;
    int j;
    int k;
    int l;
    int soma = 0;
    for(k=0; k<numerosfo; k++){
        vetouum[k] = ler(vetouum[k]);
    }
    for(l=0;l<numerosfo; l++){
        vetoudois[l] = ler(vetoudois[l]);
    }
    for(i=0; i<numerosfo; i++){
        vetoumulti[i] = vetouum[i] * vetoudois[i];
    }
    for(j=0; j<numerosfo; j++){
        soma = soma + vetoumulti[j];
    }
    printf("O produto escalar entre os dois vetores e igual a %d", soma);
    return 0;
}