#include<stdio.h>
#include<stdlib.h>

void troca (float *a, float *b){
    float aux;
    printf("Antes da troca: %1.1f, %1.1f\n", *a, *b);
    aux = *a;
    *a = *b;
    *b = aux;
    printf("Depois da troca: %1.1f, %1.1f", *a, *b);
}

int main(){
    float numero;
    float otonumero;
    printf("Digite um numero:\n");
    scanf("%f", &numero);
    printf("Digite outro numero:\n");
    scanf("%f", &otonumero);
    troca(&numero, &otonumero);
    return 0;
}