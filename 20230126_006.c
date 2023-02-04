#include <stdio.h>
#include <stdlib.h>

int ler(int num){
    printf("Digite o tamanho que voce quer que a matriz tenha (ela deve ser uma matriz quadrada):\n");
    scanf("%d", &num);
    while(num<1){
        printf("Numero nao permitido.\n");
        printf("Digite o tamanho que voce quer que a matriz tenha (ela deve ser uma matriz quadrada):\n");
        scanf("%d", &num);
    }
    return num;
}

int main(){
    int numerosfo = ler(numerosfo);
    int matriz [numerosfo] [numerosfo];
    int i, j;
    int somag = 0;
    int soma = 0;
    int k=0;
    int l=numerosfo - 1;
    int aux = 0;
    for(i=0; i<numerosfo; i++){
        for(j=0; j<numerosfo; j++){
            printf("Digite um numero na posicao M %d %d:\n", i+1, j+1);
            scanf("%d", &matriz [i] [j]);
        }
    }
    while(k<numerosfo){
        somag = somag + matriz [k] [k];
        soma = soma + matriz [l] [k];
        k++;
        l--;
    }
    if(soma != somag){
        aux = 1;
        printf("A matriz nao e um quadrado magico.");
    }else{
        k=0;
        soma=0;
        l=0;
        while(k<numerosfo && aux == 0){
            if(l<numerosfo){
            soma = soma + matriz [k] [l];
            l++;
            }else{
                if(soma == somag){
                    l=0;
                    soma = 0;
                    k++;
                }else{
                    aux = 1;
                    printf("A matriz nao e um quadrado magico.");
                }
            }
        }
    }
    if(soma == 0 && aux == 0){
        k=0;
        l=0;
        while(l<numerosfo && aux == 0){
            if(k<numerosfo){
            soma = soma + matriz [k] [l];
            k++;
            }else{
                if(soma == somag){
                    k=0;
                    soma = 0;
                    l++;
                }else{
                    aux = 1;
                    printf("A matriz nao e um quadrado magico.");
                }
            }
        }
    }
 if(soma == 0){
        printf("A matriz e um quadrado magico.");
    }
return 0;
}