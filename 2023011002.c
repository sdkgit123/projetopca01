#include<stdio.h>
#include<stdlib.h>

int contar(int n, int d){
    int soma=0;
    while (n > 0){
        if ((n%10)==d)
            soma = soma + 1;
        n=n/10;
    }
    return soma;
}

void permutacao(int x, int y){
    int i;
    int permu = 1;
    for(i=1; i<10; i++){
    if(contar(x,i) != contar(y,i)){
        permu = 0;
    }
    }
     if(permu == 1){
        printf("%d e permutacao de %d", x, y);
    }
    if(permu == 0){
        printf("%d nao e permutacao de %d", x, y);
    }
}


int main(){
    int numero;
    int otonumero;
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    printf("Digite outro numero:\n");
    scanf("%d", &otonumero);
    contar(numero, otonumero);
    permutacao(numero, otonumero);
}
