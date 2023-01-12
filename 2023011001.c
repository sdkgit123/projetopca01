#include<stdio.h>
#include<stdlib.h>

int contar(int n, int d){
    int soma=0;
    while (n > 0){
        if ((n%10)==d)
            soma = soma + 1;
        n=n/10;
    }
    printf("O numero %d aparece %d vezes", d, soma);
    return soma;
}

int main(){
    int numero;
    int digito;
    printf("Qual numero voce quer digitar?:\n");
    scanf("%d", &numero);
    printf("Qual o digito que voce quer avaliar?:\n");
    scanf("%d", &digito);
    contar(numero, digito);
}