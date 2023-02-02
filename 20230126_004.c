#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz [3] [3];
    int valor;
    int i, j;
    int soma = 0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite um numero na posicao M %d %d:\n", i+1, j+1);
            scanf("%d", & matriz [i] [j]);
        }
    }
    printf("Qual valor voce quer analisar na matriz?:\n");
    scanf("%d", &valor);
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(valor == matriz [i] [j]){
                printf("O numero %d aparece na %d linha e %d coluna.\n", valor, i+1, j+1);
                soma++;
            }
        }
    }
    if(soma == 0){
        printf("Numero nao encontrado.");
    }
    return 0;
}